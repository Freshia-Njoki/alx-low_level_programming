#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	/* code goes here */

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
