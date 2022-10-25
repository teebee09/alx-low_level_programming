#include "lists.h"

/**
 * reverse_listint - fncs that reverses a listint_t list
 * @head: pointer to the address of the first node
 * Return: returns pointer to first node of reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	/* account for no ptr and empty list */
	if (head == NULL || *head == NULL)
		return (NULL);

	/* iterate thorugh list to reverse linking */
	previous = NULL;
	while (*head == NULL)
	{
		next = (*head)->next; /* keep track of next node to move to */
		(*head)->next = previous; /* link current node's ptr to prev node */
		previous = *head; /* update previous node to be current node */
		*head = next; /* move current node to next node */
	}

	(*head) = previous; /* unlink last element from null and point backwards */

	return (*head);
}
