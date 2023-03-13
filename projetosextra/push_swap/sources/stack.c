/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 00:07:42 by dfanucch          #+#    #+#             */
/*   Updated: 2023/02/07 15:10:02 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	free_stack(t_item **stack, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(stack[i++]);
	free(stack);
}

static void	set_items_indexes(t_item **stack, int size)
{
	t_item	**ordered;
	int		i;

	i = 0;
	ordered = malloc(sizeof(t_item **) * size);
	ft_memcpy(ordered, stack, size * sizeof(t_item **));
	ft_quick_sort(ordered, 0, size);
	while (i < size)
	{
		ordered[i]->index = i;
		if (i != size - 1 && ordered[i]->value == ordered[i + 1]->value)
		{
			free_stack(stack, size);
			free(ordered);
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		i++;
	}
	free(ordered);
}

static int	*created_indexed_stack(t_item **stack, int size)
{
	int	*indexes_stack;
	int	i;

	indexes_stack = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		indexes_stack[i] = stack[i]->index;
		i++;
	}
	return (indexes_stack);
}

static char	integer_overflows(char *number)
{
	char	*new_number;
	int		overflows;

	new_number = ft_itoa(ft_atoi(number));
	overflows = ft_strncmp(new_number, number, ft_strlen(number) + 1);
	free(new_number);
	return (overflows);
}

int	*create_stack(int size, char **numbers)
{
	t_item	**stack;
	t_item	*item;
	int		*indexes_stack;
	int		i;

	i = 0;
	stack = malloc(sizeof(t_item **) * size);
	while (i < size)
	{
		item = malloc(sizeof(t_item));
		item->value = ft_atoi(numbers[i]);
		stack[i] = item;
		if (integer_overflows(numbers[i]))
		{
			free_stack(stack, i + 1);
			ft_putstr_fd("Error\n", 2);
			return (NULL);
		}
		i++;
	}
	set_items_indexes(stack, size);
	indexes_stack = created_indexed_stack(stack, size);
	free_stack(stack, size);
	return (indexes_stack);
}
