#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
