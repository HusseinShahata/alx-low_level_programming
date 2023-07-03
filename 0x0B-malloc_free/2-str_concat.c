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
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	ar = malloc(sizeof(char) * (i + j + 1));

	if (ar == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ar[i] = s2[j];
		i++, j++;
	}
	ar[i] = '\0';
	return (ar);
}
