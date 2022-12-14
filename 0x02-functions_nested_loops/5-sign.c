#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and print + if n is graeter than zero
 * 0 and points 0 if n is zero
 * -1 and prints, if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (1);
	} esle if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
