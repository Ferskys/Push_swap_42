/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleslie- <rleslie-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:31:43 by rleslie-          #+#    #+#             */
/*   Updated: 2023/03/09 13:46:44 by rleslie-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*criate_list(int num)
{
	t_node	*aux;

	aux = malloc(sizeof(t_node));
	aux->value = num;
	aux->next = NULL;
	return (aux);
}

t_node	*node_last(t_node *list)
{
	t_node	*last;

	last = list;
	while (last->next != NULL)
		last = last->next;
	return (last);
}

void	linkar(t_node **list, t_node *num)
{
	if (list == NULL)
		return ;
	if (*list == NULL)
	{
		*list = num;
		return ;
	}
	num->next = *list;
	*list = num;
}

void	link_end(t_node **list, t_node *num)
{
	t_node	*aux;

	if (list == NULL)
		return ;
	if (*list == NULL)
	{
		*list = num;
		return ;
	}
	aux = node_last(*list);
	aux->next = num;
}
