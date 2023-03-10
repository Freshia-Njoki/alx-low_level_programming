#include "main.h"
/**
 * _memset - the _memset() function fills the first
 * n bytes of the memory area pointed by s with
 * constant byte b
 * @s: target
 * @n: number of byte
 * @Return: returns the new value of target
 */

char *_memset(char *s, char b, unsined int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
