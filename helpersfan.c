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