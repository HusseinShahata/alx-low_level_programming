#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The string to copy
 *
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 * or if @str is NULL
 */

char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ar = malloc(size(char) * (i + 1));

	if (ar == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		ar[j] = str[j];
		j++;
	}
	return (ar);
}
