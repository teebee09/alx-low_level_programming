#include "lists.h"

/**
 * add_nodeint_end - fncs that adds a new node at the end of a list
 * @head: pointer to the address of the first node element
 * @n: the new node added
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));/* allocate space for new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;/* set value for new node */
	new_node->next = NULL;

	if (*head == NULL)/* account for empty list by pointing head to node */
		*head = new_node;
	else
	{
		temp = *head;/* set temp ptr to iterate w/o moving head ptr */

		while (temp->next != NULL)/* iterate till last node */
			temp = temp->next;
		temp->next = new_node;/* link last node to new node */
	}

	return (new_node);
}
