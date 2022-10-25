#include "lists.h"

/**
 * _realoc - reallocates memory for an array of pointers
 * to the node in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */

listint_t **_realoc(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - fncs that frees a listint_t list
 * @h: pointer to the address of the first node of the list
 * Return: return the number of node on the list
 */

size_t free_listint_safe(listint_t **head)
{
	listint_t *next;
	listint_t **list = NULL;
	size_t i, node = 0;

	if (head == NULL || *head == NULL)
		return (node);

	while (*head != NULL)
	{
		for (i = 0; i < node; i++)
		{
			if (*head == list[i])
			{
				*head = NULL;
				free(list);
				return (node);
			}
		}
		node++;
		list = _realoc(list, node, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (node);
}









