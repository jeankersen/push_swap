/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:51:52 by jvillefr          #+#    #+#             */
/*   Updated: 2022/05/02 13:33:24 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

int	pop_front(t_stack *a)
{
	t_elem	*tmp;
	int		val;

	tmp = a->first;
	if (!tmp)
		return (-1);
	val = tmp->value;
	a->first = tmp->next;
	free(tmp->index_binaire);
	free(tmp);
	if (a->first)
		a->first->prev = NULL;
	else
		a->last = NULL;
	return (val);
}

int	pop_back(t_stack *a)
{
	t_elem	*tmp;
	int		val;

	tmp = a->last;
	if (!tmp)
		return (-1);
	val = tmp->value;
	a->last = tmp->prev;
	free(tmp->index_binaire);
	free(tmp);
	if (a->last)
		a->last->next = NULL;
	else
		a->first = NULL;
	return (val);
}

void	push_a(char **argv, t_stack *a, t_stack *b)
{
	int	pop;

	if (b->first != NULL)
	{
		pop = pop_front(b);
		push_front(argv, a, pop);
		ft_putendl_fd("pa", 1);
	}
}

void	push_b(char **argv, t_stack *a, t_stack *b)
{
	int	pop;

	if (a->first != NULL)
	{
		pop = pop_front(a);
		push_front(argv, b, pop);
		ft_putendl_fd("pb", 1);
	}
}

void	push_all_in_main_stack(char **argv, t_stack *a, t_stack *b)
{
	while (b->first)
	{
		push_a(argv, a, b);
	}
}
