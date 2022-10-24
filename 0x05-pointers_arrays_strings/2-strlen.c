#include "main.h"

/**
 * _strlen -give the length of a string
 * @s: the string
 *
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
