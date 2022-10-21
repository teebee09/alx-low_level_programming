#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 * Return: return void
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
