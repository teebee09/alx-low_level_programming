#include "lists.h"

/**
 * free_list - fncs that frees a list
 * @head: linked list
 * Return: return void
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
