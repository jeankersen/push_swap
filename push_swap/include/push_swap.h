/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillefr <jvillefr@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:04:54 by jvillefr          #+#    #+#             */
/*   Updated: 2022/05/02 11:38:15 by jvillefr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdio.h>

typedef struct t_elem
{
	int				*index_binaire;
	int				value;
	int				index;
	struct t_elem	*prev;
	struct t_elem	*next;
}	t_elem;

typedef struct t_stack
{
	t_elem	*first;
	t_elem	*last;
}	t_stack;

bool	all_digit(char **argv);
bool	ft_dupli(char **argv);
bool	ft_int_range(char **argv);
bool	parse_input(char **argv);
bool	check_sort(char **argv, t_stack *a);

char	**ft_is_split(char *argv);

void	init(t_stack *s);
void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	clear_stack(t_stack *a);
void	clear_argv(char **s, int free_me);

void	print_stack(t_stack a);
void	print_index(t_stack a);
void	print_index_binaire(t_stack a);

void	swap_ab(t_stack *a, t_stack *b);
void	rotate_a(t_stack *a, char **argv);
void	rotate_b(t_stack *b, char **argv);
void	rotate_ab(t_stack *a, t_stack *b, char **argv);

void	push_user_input(char **argv, t_stack *a);
void	push_back(char **argv, t_stack *a, int val);
void	push_a(char **argv, t_stack *a, t_stack *b);
void	push_b(char **argv, t_stack *a, t_stack *b);
void	push_front(char **argv, t_stack *a, int val);
void	push_min_one(char **argv, t_stack *a, t_stack *b);
void	push_min_two(char **argv, t_stack *a, t_stack *b);
void	push_all_in_main_stack(char **argv, t_stack *a, t_stack *b);
void	push_zero_bit(char **argv, t_stack *a, t_stack *b, int index_bit);

void	reverse_rotate_a(t_stack *a, char **argv);
void	reverse_rotate_b(t_stack *b, char **argv);
void	reverse_rotate_ab(t_stack *a, t_stack *b, char **argv);

int		*index_to_binary(int a);
int		stacklen(t_stack a);
int		pop_back(t_stack *a);
int		pop_front(t_stack *a);
int		indexp_single(char **argv, int val);
int		sort_max_three(char **argv, t_stack *a);

void	first_case_max_three(char **argv, t_stack *a);
void	second_case_max_three(char **argv, t_stack *a);
void	sort_big(char **argv, t_stack *a, t_stack *b);
void	start_sort(char **argv, t_stack *a, t_stack *b);
void	sort_three(char **argv, t_stack *a);
void	sort_max_five(char **argv, t_stack *a, t_stack *b);

#endif
