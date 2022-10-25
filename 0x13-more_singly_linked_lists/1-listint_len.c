#include "lists.h"

/**
 * listint_len - fncs returns the num of element in a linked listint list
 * @h: list to link
 * Return: return num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0; /* counts the number of nodes */

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
