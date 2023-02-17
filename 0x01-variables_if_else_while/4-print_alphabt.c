#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;
	/* code goes here*/

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
