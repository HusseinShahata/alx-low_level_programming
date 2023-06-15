#include "main.h"
#include <stdlib.h>
/**
 * create_array - a pointer function that creates an array.
 *
 * @size: size of array.
 * @c: character to assign.
 *
 * Return: pointer to array, NULL if fails.
 **/
char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int i;

	st = malloc(sizeof(char) * size);

	if (size == 0 || st == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		st[i] = c;
	}
	return (st);
}
