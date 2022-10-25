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

	index1 = index2 = head;

	while (index1 != NULL && index2 != NULL)
	{
		index1 = index1->next;
		index2 = index2->next->next;

		if (index1 == index2)
			return (1);
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
	int i = 0;
	int loop_found;
	size_t nodes = 0;
	const listint_t *temp;

	if (head == NULL)
		exit(98);

	loop_found = loop(head);

	if (loop_found == 1) /* print upto last node before loop if loop */
	{
		i = count_num_node(head);
		for (loop_found = 0; loop_found < i; loop_found++)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			nodes += 1;
			temp = temp->next;
		}
	}
	else if (loop_found == 0) /* print regularly upto NULL if no loop */
	{
		temp = head;
		while (temp != NULL)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			nodes += 1;
			temp = temp->next;
		}
	}

	return (nodes);
}









