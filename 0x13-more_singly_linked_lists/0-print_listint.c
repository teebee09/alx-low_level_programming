#include "lists.h"

/**
 * print_listint - fncs that prints all the element of a listint_t list
 * @h: List to print
 * Return: return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0; /* count the num of nodes */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
