#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to head of list
 * @str: string in new node
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int len = 0;

	if (!str)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		temp = *head; /* a copy necessary to not update head in place */

		while (temp->next)
			temp = temp->next;

		temp->next = new; /*Add 'new' to the end of the list*/
	}

	return (new);
}
