#include <stdio.h>

/*
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
