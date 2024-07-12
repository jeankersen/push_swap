/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/05/02 13:32:22 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

void	push_user_input(char **argv, t_stack *a)
{
	int	i;

	i = ft_tab_size(argv);
	while (i > 0)
	{
		push_front(argv, a, ft_atoi(argv[i - 1]));
		i--;
	}
}

bool	parse_input(char **argv)
{
	if (!all_digit(argv) || !ft_dupli(argv))
		return (false);
	if (!ft_int_range(argv))
		return (false);
	else
		return (true);
}

char	**ft_is_split(char *argv)
{
	char	**tab;

	tab = ft_split(argv, ' ');
	if (!tab || ft_tab_size(tab) < 2)
	{
		if (tab)
		{
			free(tab[0]);
			free(tab);
		}
		return (NULL);
	}
	else
		return (tab);
}

void	init(t_stack *s)
{
	s->first = NULL;
	s->last = NULL;
}

int	main(int argc, char **argv)
{
	t_stack		a;
	t_stack		b;
	int			free_me;

	free_me = 0;
	argv++;
	init(&a);
	init(&b);
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		free_me = 1;
		argv = ft_is_split(argv[0]);
	}
	if (!argv)
		return (0);
	if (!parse_input(argv))
		return (0);
	push_user_input(argv, &a);
	start_sort(argv, &a, &b);
	clear_argv(argv, free_me);
	clear_stack(&a);
	return (0);
}
