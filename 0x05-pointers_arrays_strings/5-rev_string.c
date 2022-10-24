# include "main.h"

/**
 * rev_string - function reverses a string
 * @s: loohcS yM
 */
void rev_string(char *s)
{
	int k = 0, len = 0;
	char t;

	while (s[k++])
		len++;

	for (k = len - 1; k >= len / 2; k--)
	{
		t = s[k];
		s[k] = s[len - k - 1];
		s[len - k - 1] = t;
	}
}
