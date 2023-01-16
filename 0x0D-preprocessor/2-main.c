#include <stdio.h>
/**
 * main - Print the name of the file it was compiled from
 *
 * Return: 0;
 */

int main(void)
{
	printf("FILE: %s\n", __FILE__);

	return (0);
}
