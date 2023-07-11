#ifndef SEARCH_H
#define SEARCH_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;


/*
 * Function that searches for a value in an
 * array of integers using the Linear search algorithm
 */
int linear_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 */
int binary_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 */
int jump_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 */
int interpolation_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 */
int exponential_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted list
 * of integers using the Jump search algorithm in a singly linked list
 */
listint_t *jump_list(listint_t *list, size_t size, int value);

 /* print_list - Prints the content of a listint_t */
void print_list(const listint_t *list);

/* create_list - Creates a single linked list */
listint_t *create_list(int *array, size_t size);

/* free_list - Deallocates a singly linked list */
void free_list(listint_t *list);

#endif /* SEARCH_H */
