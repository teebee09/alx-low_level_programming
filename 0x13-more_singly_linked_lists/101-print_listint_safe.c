#include "lists.h"

/**
 * count_num_node - count the number of unique node in looped list
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0
 *         Otherwise - the number of unique nodes in the list.
 */

int count_num_node(const listint_t *head)
{
	const listint_t *index1, *index2;
	size_t nodes = 0;

	index1 = index2 = head;

	while (index1 != NULL && index2 != NULL)
	{
		index1 = index1->next;
		index2 = index2->next->next;
		nodes++;

		if (index1 == index2)
		{
			index1 = index2;
			while (index1 != index2)
			{
				index1 = index1->next;
				index2 = index2->next;
				nodes++;
			}
			return (nodes);
		}
	}
	return (0);
}

/**
 * loop - find if there's a loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: 0 if no loop, 1 if loop
 */

int loop(const listint_t *head)
{
	const listint_t *index1, *index2;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
			return ((1);
	}
	return (0);
}

/**
 * print_listint_safe - fncs that prints a listint_t list
 * @head: pointer to the address of the first node of the list
 * Return: return the number of node on the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = count_num_node(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}









