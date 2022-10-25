#include "lists.h"

/**
 * get_nodeint_at_index - fncs that returns the nth node of a string
 * @head: linked list
 * @index: index of node starting from 0
 * Return: if node doesnt exit return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
