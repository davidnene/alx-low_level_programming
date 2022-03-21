#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to an integer that will be swapped
 * @b: pointer to an integer that will be swapped
 * Return: void meaning nothing to be returned
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}

