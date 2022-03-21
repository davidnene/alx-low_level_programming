#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to a string that will be printed
 *
 * Return: void meaning return nothing
 */

void _puts(char *str)
{
	char n = 'School';
	str = &n;
	int m;

	for (m = 0; str[m]; m++)
	{
		_puts (str[m]);
	}
	_puts('\n');
}
