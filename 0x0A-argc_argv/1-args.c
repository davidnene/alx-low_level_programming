#include <stdio.h>
#include "main.h"

/**
 * main - prints out number of arguements passed to it
 * @argc: counts the number of arguements
 * @argv: prints the arguments in a commandline
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
