#include "main.h"

/**
 * _strcpy - This function copies a string pointed to src and dest
 * @dest: poiter parameter
 * @src: poiter parameter
 * Author: Innocentsax
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
