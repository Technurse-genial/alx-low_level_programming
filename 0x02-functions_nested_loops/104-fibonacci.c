#include <stdio.h>
/**
  *main - 98 fibonacci
  *
  *Return: 0
  */

int main(void)
{
	unsigned long int a = 1, b = 2;

	for (i = 0; i < 91; i++)
	{
		if (i < 90)
		{
			printf("%lu, ", a);
		} else 
		{
			printf("%lu", a);
		}
		unsigned int temp = a;

		a = b;
		b = temp + a;
	}
	printf('\n');
	return (o);
}
