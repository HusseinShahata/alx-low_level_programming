#include "main.h"

/*
 * _strlen - Function that returns the length of a string.
 *
 * @index: array var
 *
 * return: the length 
 *
 */

int _strlen(char *s)
{
        int index;

        for(index = 0; s[index] != '\0'; index++)
                ;

        return (index);
}
