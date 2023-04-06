#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int counter;

	hash = 5381;
	while ((counter = *str++))
		hash = ((hash << 5) + hash) + counter; /* hash * 33 + counter */

	return (hash);
}
