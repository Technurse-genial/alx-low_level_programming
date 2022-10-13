#include <stdio.h>
/**
  *main-printing
  *Return: Always 0
  */
int main(void)
{
	printf("Size of a char: %1 byte(s)\n", sizeof(char));
	printf("Size of an int: %1 byte(s)\n", sizeof(int));
	printf("Size of long int: %1 byte(s)\n", sizeof(long int));
	printf("Size of long int: %1 byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1 byte(s)\n", sizeof(float));
	return (0);
}
