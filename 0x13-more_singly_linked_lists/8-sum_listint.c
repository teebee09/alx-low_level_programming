#include "lists.h"

/**
 * sum_listint - fncs that returns the sum of all data(n) of a list
 * @head: linked list to check
 * Return: return sum of data n
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
