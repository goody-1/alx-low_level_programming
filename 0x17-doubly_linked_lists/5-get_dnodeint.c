#include "lists.h"
size_t dlistint_len(const dlistint_t *h);

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: pointer to head of list
 * @index: index where node will be fetched
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	int j = index;
	dlistint_t *node;
	size_t len = dlistint_len(head);

	if (j < 0 || index > len - 1)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}
	node = head;
	return (node);
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
