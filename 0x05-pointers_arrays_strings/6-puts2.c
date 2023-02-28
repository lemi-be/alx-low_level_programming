#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int be, j;

	be = 0;

	while (str[be] != '\0')
	{
		be++;
	}

	for (j = 0; j < be; j += 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
