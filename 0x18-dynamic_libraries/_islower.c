#include "main.h"
/**
 * _islower - checks if a character is lowercase if YES it returns 1
 * otherwise returns 0 just like islower() function in ctype.h
 * @c: Is the int value to be compared with the ASCII value
 * author: Innocent Charles
 * Return: 0 if successful.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
