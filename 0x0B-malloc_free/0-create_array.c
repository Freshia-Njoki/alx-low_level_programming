#include "main.h"
#include <stdlib>
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: storage char
 *
 * Return: pointer of an array chars
 */
char *create_array(insigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}