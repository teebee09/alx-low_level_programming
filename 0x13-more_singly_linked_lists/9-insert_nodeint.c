#include "lists.h"

/**
 * insert_nodeint_at_index - fncs that inserts a new node at a given position
 * @head: pointer to the first node on the Linked list
 * @idx: the index of the list where new node should be added,starts with 0
 * @n: new node's data
 * Return: address of new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp;

	/* account for empty pointer */
	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	/* malloc and set values for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* account for idx 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* link into list */
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}












