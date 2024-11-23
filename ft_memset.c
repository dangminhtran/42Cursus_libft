/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dangtran <dangtran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:37:45 by dangtran          #+#    #+#             */
/*   Updated: 2024/11/13 17:19:49 by dangtran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)(pointer + i) = (unsigned char)value;
		i++;
	}
	return (pointer);
}

// #include <stdio.h>
// #include <string.h>

//  int	main(void) {
// 	//int ar[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 
//			7, 8, 9};
//     char str[] = "Hello World";

// 	printf("TABLEAU AVANT LES FONCTIONS: \n");
// 	// printf("SIZEOF %lu \n", sizeof(chstr));
// 	for (int i = 0; i < 20; i++)
// 		printf("%d", str[i]);
// 	printf("\n");

// 	ft_memset(str, '0', 4);

// 	printf("Apres ma fonction : ");
// 	for (int i = 0; i < 20; i++)
// 		printf("%c", str[i]);
// 	printf("\n");

// 	memset(str, '0', 4);

// 	printf("Apres la vrai fonction : ");
// 	for (int i = 0; i < 20; i++)
// 		printf("%c", str[i]);
// 	printf("\n");

//     printf("TABLEAU AVANT LES FONCTIONS: \n");
// 	// printf("SIZEOF %lu \n", sizeof(chstr));
// 	for (int i = 0; i < 20; i++)
// 		printf("%d", str[i]);
// 	printf("\n");

// 	return(0);
// }
