#include "lists.h"

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list
 *
 * Description: allowed to used strup
 *
 * @head: start of the node
 * @str: the new node to be added
 *
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	char *str_copy = strdup(str);
	unsigned int len = 0;

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
	new_node->next = *head;
	*head = new_node;


	return (new_node);
}
