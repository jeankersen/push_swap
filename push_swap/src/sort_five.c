/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:28:20 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/29 15:23:18 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	push_min_one(char **argv, t_stack *a, t_stack *b)
{
	if (ft_tab_size(argv) == 4)
	{
		while (a->first->index != 0)
		{
			rotate_a(a, argv);
		}
		push_b(argv, a, b);
	}
	else
	{
		if (a->last->index == 0)
		{
			reverse_rotate_a(a, argv);
		}
		else
		{
			while (a->first->index != 0)
			{
				rotate_a(a, argv);
			}
		}
		push_b(argv, a, b);
		push_min_two(argv, a, b);
	}
}

void	push_min_two(char **argv, t_stack *a, t_stack *b)
{
	if (a->last->index == 1)
	{
		reverse_rotate_a(a, argv);
	}
	else
	{
		while (a->first->index != 1)
		{
			rotate_a(a, argv);
		}
	}
	push_b(argv, a, b);
}
