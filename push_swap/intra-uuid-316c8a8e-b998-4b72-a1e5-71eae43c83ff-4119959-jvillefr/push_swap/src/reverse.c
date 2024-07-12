/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:28:20 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/19 15:24:35 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	reverse_rotate_a(t_stack *a, char **argv)
{
	int	pop;

	pop = pop_back(a);
	push_front(argv, a, pop);
	ft_putendl_fd("rra", 1);
}

void	reverse_rotate_b(t_stack *b, char **argv)
{
	int	pop;

	pop = pop_back(b);
	push_front(argv, b, pop);
	ft_putendl_fd("rrb", 1);
}

void	reverse_rotate_ab(t_stack *a, t_stack *b, char **argv)
{
	reverse_rotate_a(a, argv);
	reverse_rotate_b(b, argv);
	ft_putendl_fd("rrr", 1);
}
