#include "lists.h"

/**
 * _strlen - fncs that prints the length of a string
 * @str: the string to check
 * Return: return 0
 */

int _strlen(const char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * add_node - fncs that adds a new node at the beginning of a list_t list
 * @head: linked list
 * @str: data for new node/string
 * Return: address of a new element, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* create new node */

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /*check if strdup malloc errored */
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* malloc for new node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* set node values */
	new_node->len = _strlen(str);

	if (head == NULL) /* set what new node points to first */
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node; /* set head to point to new node */

	return (new_node);
}










