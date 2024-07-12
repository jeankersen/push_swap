/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:28:20 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/19 15:24:33 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	rotate_a(t_stack *a, char **argv)
{
	int	pop;

	pop = pop_front(a);
	push_back(argv, a, pop);
	ft_putendl_fd("ra", 1);
}

void	rotate_b(t_stack *b, char **argv)
{
	int	pop;

	pop = pop_front(b);
	push_back(argv, b, pop);
	ft_putendl_fd("rb", 1);
}

void	rotate_ab(t_stack *a, t_stack *b, char **argv)
{
	rotate_a(a, argv);
	rotate_b(b, argv);
	ft_putendl_fd("rr", 1);
}

int	stacklen(t_stack a)
{
	int	n;

	n = 0;
	while (a.first)
	{
		n++;
		a.first = a.first->next;
	}
	return (n);
}
