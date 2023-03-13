/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:46:17 by fsuomins          #+#    #+#             */
/*   Updated: 2023/03/09 14:00:25 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void    radix_sort(int vetA[], int size)
// {
//     int     i;
//     int     max;
//     int     tmp[tam];
//     int     count[10];
//     int     expo;

//     max = pegaMax(vetA, size);
//     expo = 1;
    
//     while (max / expo > 0)
//     {
//         if (i = 0 && i < 10 && i++)
//         {
//             count[i] = 0;
//         }

//         else if (i = 0 && i < size && i++)
//         {
//             count[(vetA[i] / expo) % 10]++; 
//         }
        
//         else if (i = 1 && i < size && i++)
//         {
//             count[i] += count [i - 1]; 
//         }
        
//         else if (i = size - 1 && i >= 0 && i--)
//         {
//             count[(vetA[i] / expo)] = 0; 
//         }
//     }
    
// }