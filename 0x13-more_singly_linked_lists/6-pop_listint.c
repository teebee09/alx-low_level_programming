#include "lists.h"

/**
 * pop_listint - fncs that deletes the head of a linked list
 * @head: list to check
 * Return: delete the head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)/* account for no linked list */
		return (0);

	temp = *head;

	data = temp->n; /* save data to return later */

	*head = temp->next; /* link head to next node */
	free(temp);

	return (data);
}
