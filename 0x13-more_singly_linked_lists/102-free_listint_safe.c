#include "lists.h"

/**
 * count_num_node - count the number of unique node in looped list
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0
 *         Otherwise - the number of unique nodes in the list.
 */

size_t count_num_node(listint_t *head)
{
	listint_t *index1, *index2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	index1 = head->next;
	index2 = (head->next)->next;

	while (index2)
	{
		if (index1 == index2)
		{
			index1 = index2;
			while (index1 != index2)
			{
				nodes++;
				index1 = index1->next;
				index2 = index2->next;
			}
			index1 = index1->next;
			while (index1 != index2)
			{
				nodes++;
				index1 = index1->next;
			}

			return (nodes);
		}
		index1 = index1->next;
		index2 = (index2->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - fncs that frees a listint_t list
 * @h: pointer to the address of the first node of the list
 * Return: return the number of node on the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, i;

	nodes = count_num_node(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}

	h = NULL;
	return (nodes);
}









