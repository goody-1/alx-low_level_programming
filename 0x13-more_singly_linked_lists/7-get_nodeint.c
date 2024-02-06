#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t linked list
 * @head: pointer to head of list
 * @index: node's index
 *
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i < index)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (head);
}
