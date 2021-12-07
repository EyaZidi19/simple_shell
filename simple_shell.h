#ifndef _SIMPLESHELL_H__
#define _SIMPLESHELL_H__

#include <stdio.h>
#include <stdlib.h>


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
