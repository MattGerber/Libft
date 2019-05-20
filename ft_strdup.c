#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>


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

int main (void)
{
	char *mine;
	char *teirs;

	mine = ft_strdup("Matthew");
	teirs = strdup("Matthew");

	printf("mine : %s \ntheirs : %s", mine,teirs );
	return(0);
}