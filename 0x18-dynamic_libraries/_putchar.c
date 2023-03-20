#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints out a character to the stdout
 * @c: character to be printed
 * Return: an integer when
 */
int  _putchar(char c)
{
	write(1, &c, 1);

	return (0);
}
