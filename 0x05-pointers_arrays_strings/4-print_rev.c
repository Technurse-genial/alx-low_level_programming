#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: a string
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != 0)
	{
		c++;
	}
	while (c > 0)
	{
		c--;
		_putchar(s[c]);
	}
	_putchar('\n');
}
