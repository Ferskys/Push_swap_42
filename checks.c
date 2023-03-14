/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:25:37 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/14 18:51:57 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_numbers(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	while (str[i] == 32)
		i++;
	if (str[i] == '\0')
		return (1);
	write(1, "Error\n", 7);
	return (0);
}

int	check_max_min(char *str)
{
	const long long	result = ft_atoi_push(str);

	if (result > 2147483647 || result < -2147483648)
	{
		write(1, "Error\n", 7);
		return (0);
	}
	return (1);
}

int	check_error(t_node **list)
{
	if (duplicated(list) == 0)
	{
		write(1, "Error\n", 7);
		return (0);
	}
	if (order(list) == 0)
		return (0);
	return (1);
}

int	duplicated(t_node **list)
{
	t_node	*aux;
	t_node	*aux_aux;

	aux = *list;
	while (aux != NULL)
	{
		aux_aux = aux->next;
		while (aux_aux != NULL)
		{
			if (aux_aux->value == aux->value)
				return (0);
			aux_aux = aux_aux->next;
		}
		aux = aux->next;
	}
	return (1);
}

int	order(t_node **list)
{
	int		size_list;
	t_node	*aux;
	int		i;

	i = 0;
	aux = *list;
	size_list = 0;
	while (aux->next != NULL)
	{
		if (aux->value < aux->next->value)
			i += 1;
		aux = aux->next;
		size_list++;
	}
	if (i == size_list)
		return (0);
	else
		return (1);
}
