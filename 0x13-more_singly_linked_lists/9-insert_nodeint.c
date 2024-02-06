#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of list
 * @idx: index where new node should be added
 * @n: integer data in new node
 *
 * Return: address of new node or NULL if failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 1;
	listint_t *new_node = malloc(sizeof(listint_t)), *temp;

	if (!new_node || !head)
		return (NULL);
	new_node->n = n;

	temp = *head;
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	while (temp)
	{
		if (idx == counter)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		if (temp->next == NULL)
		{
			new_node->next = NULL;
			temp->next = new_node;
			return (new_node);
		}
		counter++;
		temp = temp->next;
	}

	/* In case of error */
	free(new_node);
	free(temp);
	return (NULL);
}
