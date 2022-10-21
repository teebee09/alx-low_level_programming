#include "lists.h"

/**
 * free_list - fncs that frees a list
 * @head: linked list
 * Return: return void
 */

void free_list(list_t *head)
{
	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
