#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to head of list
 *
 * Return:  head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int data;

	if (!head)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;

	return (data);
}
