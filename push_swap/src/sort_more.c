/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:03:42 by jvillefr          #+#    #+#             */
/*   Updated: 2022/05/02 13:58:45 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/push_swap.h"

int	*index_to_binary(int a)
{
	int	*s;
	int	mod;
	int	res;
	int	i;

	mod = 0;
	res = a;
	i = 0;
	s = (int *)ft_calloc(20, sizeof(int));
	if (s == NULL)
	{
		exit(0);
	}
	while (res != 0)
	{
		mod = res % 2;
		s[i] = mod;
		i++;
		res = res / 2;
	}
	return (s);
}

int	indexp_single(char **argv, int val)
{
	int	k;
	int	i;

	i = ft_tab_size(argv);
	k = 0;
	while (i > 0)
	{
		if (val > ft_atoi(argv[i - 1]))
			k++;
		i--;
	}
	return (k);
}

void	push_zero_bit(char **argv, t_stack *a, t_stack *b, int index_bit)
{
	int	i;

	i = ft_tab_size(argv);
	while (i > 0)
	{
		if (a->first->index_binaire[index_bit] == 0)
			push_b(argv, a, b);
		else
			rotate_a(a, argv);
		i--;
	}
}
