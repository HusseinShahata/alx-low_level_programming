#include "main.h"

char *cap_string(char *)
{
	int i = 0;

	char sep[13] = {' ' ,'\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == sep[13] || (s[i] >= 97 && s[i] <= 122))
		{
			s[i] -= 32;
		}
	return (s);
}
