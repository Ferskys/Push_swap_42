/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:15:54 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/09 14:29:03 by fsuomins         ###   ########.fr       */
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

#endif