#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linkedlist of integers
 *
 * @h: A pointer to the first element of a list
 *
 * Return: The number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	m = 0;
	while (h)
	{
		printf("%d\n", h->m);
		h = h->next;
		m++;
	}
	return (m);
}
