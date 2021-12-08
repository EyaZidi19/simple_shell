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
        if (isatty(STDIN_FILENO))
			write(STDERR_FILENO, "$ ", 2);
		cmd_count++;
		gl = getline(&lineptr, &n, stdin);
		if (gl < 0)
		{
			if (isatty(STDIN_FILENO))
				_putchar('\n');
			free(lineptr);
			exit(0);
		}
		if (word_count(lineptr) == 0)
			continue;
		command = split_line(lineptr);
		free(lineptr);
		lineptr = NULL;
		if (_strcmp(command[0], "exit") == 0)
		{
			exit_handler(argv, command, cmd_count, exit_status);
			exit_status = 2;
			continue;
		}
		if (_strcmp(command[0], "env") == 0)
		{
			_env();
			ffree(command);
			continue;
		}
		exit_status = _execute(argv, command, cmd_count);
	}
	return (0);
}