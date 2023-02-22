#include "main.h"

/**
 * _abs - function to check for absolute value
 * @a: function parameter
 *
 * Return: return a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
