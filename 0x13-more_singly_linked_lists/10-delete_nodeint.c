#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 *		'index' of a listint_t linked list
 *
 * Description: where index is the index of the node that
 *		should be deleted. Index starts at 0
 *
 * @head: pointer to head of the list
 * @index: the index of the list where the node should be added, starts at 0
 *
 * Return: 1 if succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int i;

	temp = *head;

	if (*head == NULL)
		return (0);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (temp == NULL)
			return (0);
		temp = temp->next;
	}

	temp2 = temp->next->next;
	free(temp->next);

	temp->next = temp2;

	return (1);
}
