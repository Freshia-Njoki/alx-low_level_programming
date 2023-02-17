#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/*code*/
	j = i % 10;
	if (j > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", i, j);
	}
	else if (j == 0)
	{
		printf("Last digit of %d is %d and is 0\n", i, j);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", i, j);
	}
	return (0);
}
