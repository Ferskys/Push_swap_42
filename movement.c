/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:38:52 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/13 14:43:50 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(No **stack_a)
{
	No	*aux;
	No	*aux2;

	aux = *stack_a;
	aux2 = aux->next;
	*stack_a = aux2;
	aux->next = aux2->next;
	aux2->next = aux;
	write(1, "sa\n", 3);
	return ;
}

void	sb(No **stack_b)
{
	No	*aux;
	No	*aux2;

	aux = *stack_b;
	aux2 = aux->next;
	*stack_b = aux2;
	aux->next = aux2->next;
	aux2->next = aux;
	write(1, "sb\n", 3);
	return ;
}

void	ss(No **stack_a, No **stack_b)
{
	No	*aux;
	No	*aux2;

	aux = *stack_a;
	aux2 = aux->next;
	*stack_a = aux2;
	aux->next = aux2->next;
	aux2->next = aux;
	aux = NULL;
	aux2 = NULL;
	aux = *stack_b;
	aux2 = aux->next;
	*stack_b = aux2;
	aux->next = aux2->next;
	aux2->next = aux;
	write(1, "ss\n", 3);
	return ;
}

void	pa(No **stack_b, No **stack_a)
{
	No	*aux;

	if (*stack_b == NULL)
		return ;
	aux = *stack_b;
	*stack_b = (*stack_b)->next;
	aux->next = *stack_a;
	*stack_a = aux;
	write(1, "pa\n", 3);
	return ;
}

void	pb(No **stack_a, No **stack_b)
{
	No	*aux;

	if (*stack_a == NULL)
		return ;
	aux = *stack_a;
	*stack_a = (*stack_a)->next;
	aux->next = *stack_b;
	*stack_b = aux;
	write(1, "pb\n", 3);
	return ;void	ra(No **stack_a);
}

//2

void	ra(No **stack_a)
{
	No	*last;
	No	*first;

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
	return ;
}

void	rb(No **stack_b)
{
	No	*last;
	No	*first;

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
	return ;
}

void	rr(No **stack_a, No **stack_b)
{
	No	*last;
	No	*first;

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
	return ;
}
