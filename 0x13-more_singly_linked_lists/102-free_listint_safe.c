#include "lists.h"

/**
 * free_listint_safe - function to free list
 * @head: pointer to the pointer of the list
 * Return: count
 */

size_t free_listint_safe(listint_t **head)
{
	size_t count_new = 0, count_comp = 0;
	listint_t *temp, *h, *comp;

	if (head == NULL || *head == NULL)
		return (0);
	h = comp = temp = *head;
	count_new = 0;
	while (h != NULL)
	{
		comp = *head;
		count_comp = 0;
		while (count_new > count_comp)
		{
			if (temp == comp)
			{
				*head = NULL;
				return (count_new);
			}
			count_comp++;
			comp = comp->next;
		}
		count_new++;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(comp);
	return (count_new);
}
