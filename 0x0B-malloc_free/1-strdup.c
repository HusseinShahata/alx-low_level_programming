#include <stdlib.h>

char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	
	while (str[i])
	{
		i++;
	}

	ar = malloc(size(char) * (i + 1));

	if (ar == NULL)
	{
		return (NULL);
	}

	while (ar[j])
	{
		j++;
	}

	ar[j + 1] = 0;
	return (ar);
}
