#include "main.h"
/**
 * _isupper - varifies if charactre in a function is in uppercase or not
 * @c: tested character
 * Return: return 1 if it is in uppercase, 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
