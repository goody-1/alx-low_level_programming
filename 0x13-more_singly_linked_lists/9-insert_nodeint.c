#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a
 *			given position of a listint_t list
 *
 * Description: if it is not possible to add the new node at index idx,
 *			do not add the new node and return NULL
 *
 * @head: pointer to head of the list
 * @idx: the index of the list where the node should be added, starts at 0
 * @n: the data to be added
 *
 * Return: the address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *temp2;
	unsigned int i, j = 0;

	temp2 = *head;

	while (temp2 != NULL)
	{
		j++;
		temp2 = temp2->next;
	}

	if ((*head) == NULL || idx > j - 1)
		return (NULL);

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
