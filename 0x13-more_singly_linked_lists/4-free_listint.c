#include "lists.h"

/**
 * free_listint - fncs that frees a list
 * @head: list to free
 * Return: return void
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	if (head == NULL)/* account for no linked list */
		return;

	while (head != NULL)/* have ptr keep track of head node and free */
	{
		p = head;
		head = head->next;/* move to next node while ptr frees prior */
		free(p);
	}
}
