#include "main.h"
/**
  *_abs - computes the absolute value of an integer
  *@abs: The parameter for absolute value
  *Return: abs value of parameter
  */
int _abs(int abs)
{
	if (abs < 0)
	{
		return (abs * -1);
	}
	return (abs);
}
