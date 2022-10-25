#include "lists.h"

/**
 * add_nodeint - fncs that adds a new node at the beginning of a list
 * @head: pointer to the address of the first node of the list
 * @n: data to add
 * Return: address of new element,or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* set new value */
	new_node->next = *head; /* link new node to point to addr of next node */
	*head = new_node; /* then switch head addrs pointer to point to new node */

	return (new_node);
}
