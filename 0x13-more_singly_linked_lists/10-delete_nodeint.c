#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position
 * @head: pointer to head of list
 * @index: index where node should be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *node;
	int success = 1, failure = -1;

	if (!(*head))
		return (failure);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (success);
	}

	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || temp->next == NULL)
		return (failure);

	node = temp->next;
	temp->next = node->next;
	free(node);

	return (success);
}
