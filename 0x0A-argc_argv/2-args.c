#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Retun: 0 - success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <argc; i++)
		prinntf("%s\n", argv[i]);
	return (0);

}