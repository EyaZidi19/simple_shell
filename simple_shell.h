#ifndef _SIMPLESHELL_H__
#define _SIMPLESHELL_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>

#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * struct cmd - struct to pass different arguments to different functions
 * @argc: number of arguments
 * @argv: commands entered
 * @av: parsed commands
 * @cmd_count: current count of commands entered
 */
typedef struct cmd
{
	int argc;
	char **argv;
	char **av;
	int cmd_count;
} cmd;

/**
 * struct envvar - struct to pass environment information
 * @varname: name of variable
 * @next: next in list
 */
typedef struct envvar
{
	char *varname;
	struct envvar *next;
} envvar_t;

extern char **environ;

envvar_t *add_env_node(envvar_t **head, char *varname);
int _putchar(char c);



void _env(void);
#endif
