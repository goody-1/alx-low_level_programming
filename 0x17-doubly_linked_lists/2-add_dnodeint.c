#include "lists.h"

/**
 * add_dnodeint -  function that adds a new node at the
 * beginning of a dlistint_t list
 *
 * @head: double pointer to head
 * @n: const integer data
 *
 * Return: address of the new element, or NULL if it failed
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (!(*head))
	{
		free(new_node);
		return (NULL);
	}

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (*head);
}
