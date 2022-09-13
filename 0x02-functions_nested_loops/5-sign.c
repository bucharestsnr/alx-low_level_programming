#include <limits.h>
#include "main.h"

/**
 * print_sign - Determines if the input number
 * greater, iqual or less than zero.
 * @n: The input number as an integer.
 * Return: 1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */
int main(void)
{
	int r;
	r = print_sign(98);
	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
