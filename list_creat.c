/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_creat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:06:24 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/14 18:43:44 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

t_node	*create_list(char *num)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	new->value = atoi(num);
	new->next = NULL;
	return (new);
}

t_node	*create_list2(int num)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	new->value = num;
	new->next = NULL;
	return (new);
}

t_node	*link_next(t_node *list)
{
	t_node	*aux;

	aux = list;
	while (aux->next != NULL)
		aux = aux->next;
	return (aux);
}

void	linker(t_node **list, t_node *num)
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

void	put_last(t_node **list, t_node *num)
{
	t_node	*aux;

	if (list == NULL)
		return ;
	if (*list == NULL)
	{
		*list = num;
		return ;
	}
	aux = link_next(*list);
	aux->next = num;
}
