#include "main.h"
/**
  *print_last_digit - prints the last digit of a number
  *@l: parameter to be checked
  *Return: last digit of l
  */
int print_last_digit(int l)
{
	if (l % 10 < 0)
	{
		_putchar(((l % 10) * -(1)) + 48);
		return ((l % 10) * -(1));
	}
	_putchar((l % 10) + 48);
	return (l % 10);
}
