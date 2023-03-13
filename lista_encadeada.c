/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lista_encadeada.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:06:24 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/09 17:05:36 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

No    *inserir_inicio(char *num)
{
    No    *new = malloc(sizeof(No));
    new->value = atoi(num);
    new->next = NULL;
    return (new);
}

No  *linkar_proximo(No *lista)
{
    No *aux;

    aux = lista;
    while (aux->next != NULL)
        aux = aux->next;
    return (aux);
}

void    inserir_fim(No **lista, No *num)
{
    No *aux;
        
    if (lista == NULL)
        return;
    if (*lista == NULL)
    {
        *lista = num;
        return;
    }
    aux = linkar_proximo(*lista);
    aux->next = num;
    
    // while (lista != NULL)
    //   *lista = aux->next;
}