#include "lists.h"

/**
 * add_node_end - a function that adds a new node at
 * the end of a list_t list
 *
 * Description: allowed to used strup, str needs to be duplicated
 *
 * @head: start of the node
 * @str: the new node to be added
 *
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str_copy = strdup(str);
	unsigned int len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	if (str_copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str_copy[len] != '\0')
		len++;

	new_node->str = str_copy;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}


	return (*head);
}
