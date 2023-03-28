#include "main.h"

/*
 * int _strlen - Function that returns the length of a string.
 *
 *@index: variable to take the input characters. 
 *
 * return: the length.
 */

int _strlen(char *s)
{
	int index;

	for(index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
