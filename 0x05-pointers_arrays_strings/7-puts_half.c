#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: The string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > str[4])
			_putchar(str[i]);
	}
	_putchar('\n');
}
