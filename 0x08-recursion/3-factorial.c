#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: integer to be printed
 * Return: factorials
 */

int factorial(int n)
{
	if (n == 0) /*Base condition*/

		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1)); /*Recursive call*/
}
