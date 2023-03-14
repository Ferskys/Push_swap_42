/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:16:25 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/14 15:22:26 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack_a)
{
	t_node	*last;
	t_node	*first;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last = *stack_a;
	first = *stack_a;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "ra\n", 3);
}

void	rb(t_node **stack_b)
{
	t_node	*last;
	t_node	*first;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	last = *stack_b;
	first = *stack_b;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rb\n", 3);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	t_node	*last;
	t_node	*first;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	last = *stack_a;
	first = *stack_a;
	while (last->next != NULL)
		last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	last = *stack_b;
	first = *stack_b;
	while (last->next != NULL)
		last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rr\n", 3);
}

void	rra(t_node **a)
{
	t_node	*aux;
	t_node	*aux_aux;

	aux = *a;
	while (aux != NULL)
	{
		if (aux->next->next == NULL)
		{
			aux_aux = aux->next;
			aux->next->next = *a;
			aux->next = NULL;
			break ;
		}
		aux = aux->next;
	}
	aux_aux->next = *a;
	*a = aux_aux;
	write(1, "rra\n", 4);
}
