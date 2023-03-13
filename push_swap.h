/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:15:54 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/13 14:42:34 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct no
{
    int value;
    struct no *next;   
} No;

void    swap_ss(No **stack_a, No **stack_b);
void    ft_swap_ab(No **lista, char c);
void    ft_swap(No **lista);
void	sa(No **stack_a);
void	sb(No **stack_b);
void	ss(No **stack_a, No **stack_b);
void	pa(No **stack_b, No **stack_a);
void	pb(No **stack_a, No **stack_b);
void	ra(No **stack_a);
void	rb(No **stack_b);
void	rr(No **stack_a, No **stack_b);

#endif