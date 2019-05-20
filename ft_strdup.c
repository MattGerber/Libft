#include "libft.h"

char *ft_strdup(const char *s1)
{
	int i;
	char *ptr;

	i = 0;
	while (s1[i])
	{
		i++;
	}

	ptr = (char*)malloc(i * sizeof(char));
	i = 0;

	while (s1[i])
	{	
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}