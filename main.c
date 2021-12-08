#include "simple_shell.h"
/**
 * main - entrypoint to simple_shell
 *
 * @ac: number of arguments
 * @argv: commands and arguments
 *
 * Return: 0 on success
 */
int main(int __attribute__((unused))ac, char *argv[])
{
	size_t n = 0;
	char *lineptr = NULL;
	char **command = NULL;
	int gl = 0, cmd_count = 0, exit_status = 0;

	signal(SIGINT, sigintHandler);
	while (1)
	{