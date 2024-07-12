/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:50 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/20 12:25:23 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	swap_a(t_stack *a)
{
	t_elem	tmp;

	if (a->first->next != NULL)
	{
		tmp.value = a->first->value;
		tmp.index = a->first->index;
		tmp.index_binaire = a->first->index_binaire;
		a->first->value = a->first->next->value;
		a->first->index = a->first->next->index;
		a->first->index_binaire = a->first->next->index_binaire;
		a->first->next->value = tmp.value;
		a->first->next->index = tmp.index;
		a->first->next->index_binaire = tmp.index_binaire;
		ft_putendl_fd("sa", 1);
	}
}

void	swap_b(t_stack *b)
{
	t_elem	tmp;

	if (b->first->next != NULL)
	{
		tmp.value = b->first->value;
		tmp.index = b->first->index;
		tmp.index_binaire = b->first->index_binaire;
		b->first->value = b->first->next->value;
		b->first->index = b->first->next->index;
		b->first->index_binaire = b->first->next->index_binaire;
		b->first->next->value = tmp.value;
		b->first->next->index = tmp.index;
		b->first->next->index_binaire = tmp.index_binaire;
		ft_putendl_fd("sb", 1);
	}
}

void	swap_ab(t_stack *a, t_stack *b)
{
	if ((a->first->next != NULL) && (b->first->next != NULL))
	{
		swap_a(a);
		swap_a(b);
		ft_putendl_fd("ss", 1);
	}
}

void	reverse_rotate(t_stack *a, char **arg)
{
	int	pop;

	pop = pop_back(a);
	push_front(arg, a, pop);
}
