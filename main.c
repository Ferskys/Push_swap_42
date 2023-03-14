/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:04:10 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/14 18:52:05 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_free(t_node *list)
{
	if (list)
	{
		ft_free(list->next);
		free(list);
	}
}

void	checkers(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (check_numbers(argv[i]) == 0)
			exit(0);
		if (check_max_min(argv[i]) == 0)
			exit(0);
		i++;
	}
}

size_t	push_strlen(t_node *p)
{
	int	i;

	i = 0;
	while (p != NULL)
	{
		i++;
		p = p->next;
	}
	return (i);
}

void	execution(t_node **stack_a, t_node **stack_b, int argc)
{
	if (push_strlen(*stack_a) <= 3 && push_strlen(*stack_a) > 1)
		order_three(stack_a);
	else if (push_strlen(*stack_a) == 4)
		order_four(stack_a, stack_b);
	else if (push_strlen(*stack_a) == 5)
		order_five(stack_a, stack_b);
	else
		radix(stack_a, stack_b, argc - 1);
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		i;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	checkers(argv + 1);
	while (argv[i])
	{
		put_last(&stack_a, create_list(argv[i]));
		i++;
	}
	if (check_error(&stack_a) == 0)
	{
		ft_free(stack_a);
		return (0);
	}
	execution(&stack_a, &stack_b, argc);
	ft_free(stack_a);
	ft_free(stack_b);
	return (0);
}
