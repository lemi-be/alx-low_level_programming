#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, be, be_1;

	be = 0;
	be_1 = 0;

	while (s[be] != '\0')
	{
		be++;
	}

	be_1 = be - 1;

	for (i = 0; i < be / 2; i++)
	{
		tmp = s[i];
		s[i] = s[be_1];
		s[be_1--] = tmp;
	}
}
