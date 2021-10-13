#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * Description: not allowed to use more than 1 loop
 *			not allowed to use malloc, free or arrays
 *			can only declare a maximum of two variables in function
 *
 * @head: pointer to head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node;
	listint_t *cur_node;

	if (*head != NULL)
	{
		prev_node = *head;
		cur_node = (*head)->next;
		*head = (*head)->next;

		prev_node->next = NULL;

		while (*head != NULL)
		{
			*head = (*head)->next;
			cur_node->next = prev_node;

			prev_node = cur_node;
			cur_node = *head;
		}

		*head = prev_node;
	}
	else
		return (NULL);

	return (*head);
}
