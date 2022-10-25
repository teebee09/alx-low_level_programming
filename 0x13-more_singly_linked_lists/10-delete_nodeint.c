#include "lists.h"

/**
 * delete_nodeint_at_index - fncs that deletes node at index index of a list
 * @head: pinter to the address of the first node
 * @index: index of the node that should be deleted
 * Return: On Success 1, -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *temp2;

	/* account for empty list */
	if (head == NULL)
		return (-1);

	temp = *head;

	/* account for deleting beginning node */
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	/* iterate tmp to idx prior to idx we want to delete */
	while (i < (index - 1) && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	/* iterate tmp to idx prior to idx we want to delete */
	if (i != (index - 1) || temp->next == NULL)
		return (-1);

	/* link prior idx before delete */
	temp2 = temp->next;
	temp->next = (temp->next)->next;
	free(temp2);

	return (1);
}
