#include "main.h"

/**
 * print_rev - a function that prints a sreing in reverse
 * followed by a new line
 * @s: a pointer to a string
 * Return: void meaning return nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar ('\n');
}
