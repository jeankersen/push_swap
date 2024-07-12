/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:28:20 by jvillefr          #+#    #+#             */
/*   Updated: 2022/05/02 11:11:07 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	sort_big(char **argv, t_stack *a, t_stack *b)
{
	int	round;

	round = 0;
	while (!check_sort(argv, a))
	{
		push_zero_bit(argv, a, b, round);
		push_all_in_main_stack(argv, a, b);
		round++;
	}
}

void	sort_max_five(char **argv, t_stack *a, t_stack *b)
{
	push_min_one(argv, a, b);
	sort_max_three(argv, a);
	while (b->first)
	{
		push_a(argv, a, b);
	}
}

int	sort_max_three(char **argv, t_stack *a)
{
	int	i;

	i = ft_tab_size(argv);
	if (i == 1)
	{
		return (0);
	}
	else if (i == 2)
	{
		if (!check_sort(argv, a))
		{
			swap_a(a);
			return (0);
		}
	}
	else
		sort_three(argv, a);
	return (0);
}

void	start_sort(char **argv, t_stack *a, t_stack *b)
{
	int	i;

	i = ft_tab_size(argv);
	if (!check_sort(argv, a))
	{
		if (i <= 3)
			sort_max_three(argv, a);
		else if (i <= 5)
			sort_max_five(argv, a, b);
		else if (i <= 1000)
			sort_big(argv, a, b);
		else
			ft_putendl_fd("WTF!", 1);
	}
}
