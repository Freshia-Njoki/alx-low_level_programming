#include "main.h"
/**
 * _strcat -conatenates 2 strings
 * @dest: destination
 * @src: source
 * Return: pointer to  the destination
 */
char *_strcat(char *dest, char * src)
{
	int count = 0, count2 = 0;
	while(*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + cout2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
