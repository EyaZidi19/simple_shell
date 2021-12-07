#include "simple_shell.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, On error, -1 is returned,
 * and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



/**
 * _puts - prints a string
 * @s: string to print
 * Return: void
 */
void _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}


/**
 * _env - prints the current environment
 * Return: void
 */
void _env(void)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		_putchar('\n');
		i++;
	}
}
