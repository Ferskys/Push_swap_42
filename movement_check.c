/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:16:25 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/09 18:42:43 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void ft_swap_a(No **lista)
// {
//   No *aux;
  
//   if (*lista != NULL && (*lista)->next != NULL)
//   {
//     aux = (*lista)->next;
//     (*lista)->next == (*lista)->next->next;
//     aux->next = *lista;
//     *lista = aux; 
//   }
// }

// void ft_swap_ab(No **lista, char c)
// {
//   if (c == 97)
//   {
//     ft_swap(lista);
//     ft_putstr_fd("sa\n", STDOUT_FILENO);
//   }
//   if (c == 98)
//   {
//     ft_swap(lista);
//     ft_putchar_fd("sb\n", STDOUT_FILENO);
//   }
// }

// void  swap_ss(No **stack_a, No **stack_b)
// {
//   ft_swap_ab(stack_a, 97);
//   ft_swap_ab(stack_b, 98);
//   ft_putchar_fd("ss\n", STDOUT_FILENO);
// }
void	sa_check(No **stack_a)
{
	No	*tmp;
	No	*tmp2;

	tmp = *stack_a;
	tmp2 = tmp->next;
	*stack_a = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	return ;
}

void	sb_check(No **stack_b)
{
	No	*tmp;
	No	*tmp2;

	tmp = *stack_b;
	tmp2 = tmp->next;
	*stack_b = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	return ;
}

void	ss_check(No **stack_a, No **stack_b)
{
	No	*tmp;
	No	*tmp2;

	tmp = *stack_a;
	tmp2 = tmp->next;
	*stack_a = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	tmp = NULL;
	tmp2 = NULL;
	tmp = *stack_b;
	tmp2 = tmp->next;
	*stack_b = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	return ;
}

void	pa_check(No **stack_b, No **stack_a)
{
	No	*tmp;

	if (*stack_b == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	return ;
}

void	pb_check(No **stack_a, No **stack_b)
{
	No	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	return ;
}


// 2
void	ra_check(No **stack_a)
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
	return ;
}

void	rb_check(No **stack_b)
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
	return ;
}

void	rr_check(No **stack_a, No **stack_b)
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
	return ;
}

// 3
void	rra_check(No **stack_a)
{
	No	*last;
	No	*tmp;

	last = *stack_a;
	tmp = *stack_a;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *stack_a;
	*stack_a = last;
	tmp->next = NULL;
}

void	rrb_check(No **stack_b)
{
	No	*last;
	No	*tmp;

	last = *stack_b;
	tmp = *stack_b;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *stack_b;
	*stack_b = last;
	tmp->next = NULL;
}

void	rrr_check(No **stack_a, No **stack_b)
{
	No	*last;
	No	*tmp;

	last = *stack_a;
	tmp = *stack_a;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *stack_a;
	*stack_a = last;
	tmp->next = NULL;
	last = *stack_b;
	tmp = *stack_b;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *stack_b;
	*stack_b = last;
	tmp->next = NULL;
	return ;
}