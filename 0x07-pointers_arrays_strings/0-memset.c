#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: indexi
 * Retun: *s
 */

char *_memset(char *s, char b, unsined int n)
{
	unsigned int i;

	for (i =0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
