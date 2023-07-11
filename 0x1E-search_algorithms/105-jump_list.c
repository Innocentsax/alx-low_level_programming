#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted linked list of integers
 * using the Jump search algorithm.
 *
 * @list: Pointer to the head of the linked list
 * @size: Number of nodes in the linked list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located or
 * if value is not present in head or if head is NULL, return NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *low =  NULL, *high = NULL;
	size_t limit = 0;

	if (list != NULL)
	{
		low = list;
		high = list;
		while (high->next != NULL && high->index < size && high->n < value)
		{
			low = high;
			limit += sqrt(size);
			while (high->index < limit && high->next != NULL)
				high = high->next;
			printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low->index, high->index);
		while (low != NULL && low->index < size && low->index <= high->index)
		{
			printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
			if (low->n == value)
				return (low);
			low = low->next;
		}
	}
	return (NULL);

}
