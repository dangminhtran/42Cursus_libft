#include "libft.h"

void    *ft_memset(void *pointer, int value, size_t count)
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

#include <stdio.h>
#include <string.h>

 int	main() {
	int ar[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("TABLEAU AVANT LES FONCTIONS: \n");
	printf("SIZEOF %lu \n", sizeof(int));
	for (int i = 0; i < 20; i++)
		printf("%d", ar[i]);
	printf("\n");

	ft_memset(ar, 'A', 2);

	printf("Apres ma fonction : ");
	for (int i = 0; i < 20; i++)
		printf("%c", ar[i]);
	printf("\n");

	memset(ar, 'A', 2);

	printf("Apres la vrai fonction : ");
	for (int i = 0; i < 20; i++)
		printf("%c", ar[i]);
	printf("\n");

	return(0);
}

