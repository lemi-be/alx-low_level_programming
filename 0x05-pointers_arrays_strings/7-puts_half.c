#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int be, x, i;

	be = 0;

	while (str[be] != '\0')
	{
		be++;
	}

	if (be % 2 == 0)
	{
		for (i = be / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (be % 2)
	{
		for (x = (be - 1) / 2; x < len - 1; x++)
		{
			_putchar(str[x + 1]);
		}
	}
	_putchar('\n');
}
