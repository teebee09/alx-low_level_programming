#include "lists.h"

/**
 * free_listint2 - fncs that frees a list, and set head to NULL
 * @head: list to free
 * Return: return void
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)/* account for no ptr */
		return;

	while (*head != NULL)/* have ptr keep track of head node and free */
	{
		p = *head;
		*head = p->next;/* move to next node while ptr frees prior */
		free(p);
	}
}
