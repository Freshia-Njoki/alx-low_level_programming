#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p;
	p = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code goes */
       if (p > 5)
       {
      		printf("Last digit of %d is %d and is greater than 5\n", n, p);
       }
       else if (p == 0)
       {
	       printf("Last digit of %d is %d and is 0\n", n, p);
       }
       else
       {
	       printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
	
       }
       return (0);
}		      
