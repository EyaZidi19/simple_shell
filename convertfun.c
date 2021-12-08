#include "simple_shell.h"


/**
 * _itoa - converts integer to string
 * @n: integer to convert
 * @s: string
 * Description: version of itoa
 * Return: void
 */

char *_itoa(int n, char *s)
{
	int i = 0;
	int sign = n;

		if (n < 0)
		n = -n;

	for (sign = 1; sign <= n; sign *= 10)
		;
	sign /= 10;
	while (sign > 0)
	{
		s[i] = (n / sign + '0');
		n %= sign;
		i++;
		sign /= 10;
	}
	s[i] = '\0';
	return (s);
}
