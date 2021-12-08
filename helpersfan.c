#include "simple_shell.h"
/**
 * rm_nl - remove the last character newline from string
 * @lineptr: double pointer to string
 */
void rm_nl(char **lineptr)
{
	char *ptr;
	int i;

	ptr = *lineptr;

	i = 0;
	while (ptr[i] != '\n')
		i++;
	ptr[i] = '\0';
}
char *_getenv(char *name)
{
	int i = 0;

	while (environ[i])
	{
		char *haystack = environ[i];
		char *needle = name;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack + 1);
		i++;
	}
	return (NULL);
}
