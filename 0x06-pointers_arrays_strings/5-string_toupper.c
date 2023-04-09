#include <stdio.h>

/**
 * string_toupper - converts string lowercase letters to uppercase
 * @s: input string to be converted
 *
 * Return: string after conversion to upper
 */

char *string_toupper(char *)
{
	int i = 0;

	while ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90))
	{
		if (s[i] >= 48 && s[i] <= 57)
			s[i] = s[i] + 17;
		i++;
	}
}
