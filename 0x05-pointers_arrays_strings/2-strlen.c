#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: a pointer to a string whose length will be counted
 *
 * Return:the length of the string
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}

	return (u);
}
