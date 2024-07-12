/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:28:20 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/20 14:49:32 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	sort_three(char **argv, t_stack *a)
{
	if (a->first->index < a->first->next->index)
	{
		first_case_max_three(argv, a);
	}
	if (a->first->next->index < a->first->index)
	{
		second_case_max_three(argv, a);
	}
}

void	first_case_max_three(char **argv, t_stack *a)
{
	if (a->first->index < a->last->index
		&& a->last->index < a->first->next->index)
	{
		reverse_rotate_a(a, argv);
		swap_a(a);
	}
	if (a->last->index < a->first->index)
	{
		reverse_rotate_a(a, argv);
	}
}

void	second_case_max_three(char **argv, t_stack *a)
{
	if (a->first->index < a->last->index)
	{
		swap_a(a);
	}
	if (a->first->next->index < a->last->index
		&& a->last->index < a->first->index)
	{
		rotate_a(a, argv);
	}
	if (a->last->index < a->first->next->index)
	{
		swap_a(a);
		reverse_rotate_a(a, argv);
	}
}

bool	check_sort(char **argv, t_stack *a)
{
	t_elem	*pelem;
	int		j;
	int		i;

	i = 1;
	j = ft_tab_size(argv);
	pelem = a->first;
	while (i < j)
	{
		if (pelem->index > pelem->next->index)
			return (false);
		pelem = pelem->next;
		j--;
	}
	return (true);
}
