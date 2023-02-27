#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: The string
 */

void puts_half(char *str)
{
	int len = 0, index = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
