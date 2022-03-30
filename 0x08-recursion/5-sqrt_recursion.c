#include "main.h"

/**
 * _evaluate - evaluate natural sqrt
 * @i: integer
 * @n: integer
 * Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n)

	else if (i * i < n)
		return (_evaluate(i + 1, n));

	else if (i * i == n)
		return (i);

	return (-1);

	return (-1);
