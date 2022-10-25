#include "lists.h"

/**
 * find_listint_loop - fns that finds the loop in a linked list
 * @head: pointer to the address of the first node
 * Return: address of the node where the loop starts,
 *         or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *index1, *index2;

	index1 = index2 = head;
	while (index1 && index2 && index2->next)
	{
		index1 = index1->next;
		index2 = index2->next->next;
		if (index1 == index2)
		{
			index1 = index2;
			break;
		}
	}
	if (!index1 || !index2 || !index2->next)
		return (NULL);

	while (index1 != index2)
	{
		index1 = index1->next;
		index2 = index2->next;
	}
	return (index2);
}
