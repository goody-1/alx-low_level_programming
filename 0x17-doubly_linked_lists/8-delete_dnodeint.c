#include "lists.h"
size_t dlistint_len(const dlistint_t *h);
void node_delete(dlistint_t **head, unsigned int index);

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 *								in a doubly linked list.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t len = dlistint_len(*head);

	if ((int) index < 0 || index >= len)
		return (0);

	node_delete(head, index);

	return (1);
}


/**
 * node_delete - Deletes a node at a given index in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: void
 */
void node_delete(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *next = NULL;
	unsigned int i;

	if (*head == NULL)
		return;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return;
	}

	for (i = 0; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return;

	next = current->next->next;
	free(current->next);
	current->next = next;
	if (next != NULL)
		next->prev = current;
}

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 *
 * @h: pointer to integer
 *
 * Return: the number of nodes
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
