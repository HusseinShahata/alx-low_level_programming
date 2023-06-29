#include <stdlib.h>
#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i, j, k;

	if (s1 == NULL)
	{
		return(NULL);
	}
	
	while (s1[i] != '\0')
	{
		i++;
	}

	if (s2 == NULL)
	{
		return(NULL);
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	ar = malloc(sizeof(char) * (i + j + 1));

	if (ar == NULL)
	{
		return(NULL);
	}

	while (ar[k] != '\0')
	{
		k++;
	}

	return(ar);
}
