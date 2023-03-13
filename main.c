/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:04:10 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/13 13:54:29 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	check_argv(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '-')
			i++;
		if (!ft_isdigit(str[i]))
		{
			write(1, "Error\n", 7);
			return (0);
		}
		i++;
	}
	return (1);
}

// void	sort(No **stack_a, No **stack_b, int argc)
// {
// 	if (push_strlen(*stack_a) <= 3 && push_strlen(*stack_a) > 1)
// 		order_three(stack_a);
// 	else if (push_strlen(*stack_a) == 4)
// 		order_four(stack_a, stack_b);
// 	else if (push_strlen(*stack_a) == 5)
// 		order_five(stack_a, stack_b);
// 	else
// 		radix(stack_a, stack_b, argc - 1);
// }

int main(int argc, char **argv)
{
    No *stack_a;
    No *stack_b;
    int i;

    stack_a = NULL;
    stack_b = NULL;	
	if(argc > 2)
		return (0);
    while(argv[i])
    {
		if (check_argv(argv[i]) == 0)
			return (0);
        inserir_fim(&stack_b, inserir_inicio(argv[i]));
        i++;
    }
    // sort(&stack_a, &stack_b, argc);
    // inserir_fim(&list, argv[3]);
    // if (argc < 2)
    //     return (0);
    return (0);
}