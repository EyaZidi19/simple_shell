#include "simple_shell.h"


/**
 * iscmd - check if file is an executable
 * @filename: filename as char pointer
 *
 * Return: 1 if file is executable, 0 if not
 */
int iscmd(char *filename)
{
	struct stat st;

	stat(filename, &st);
	if ((st.st_mode & S_IFREG) && (!access(filename, X_OK)))
		return (1);
	else
		return (0);
}
