/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:46 by jvillefr          #+#    #+#             */
/*   Updated: 2022/04/30 16:13:51 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../libft/libft.h"

void	print_index(t_stack a)
{
	t_elem	*pelem;

	pelem = a.first;
	while (pelem)
	{
		ft_putnbr_fd(pelem->index, 2);
		ft_putchar_fd('\n', 2);
		pelem = pelem->next;
	}
}

void	print_stack(t_stack a)
{
	t_elem	*pelem;

	pelem = a.first;
	while (pelem)
	{
		ft_putnbr_fd(pelem->value, 2);
		ft_putchar_fd('\n', 2);
		pelem = pelem->next;
	}
}

void	print_index_binaire(t_stack a)
{
	t_elem	*pelem;
	int		i;

	pelem = a.first;
	while (pelem)
	{
		i = 0;
		while (i < 10)
		{
			printf("%d", pelem->index_binaire[i]);
			i++;
		}
		printf("\n");
		pelem = pelem->next;
	}
}
