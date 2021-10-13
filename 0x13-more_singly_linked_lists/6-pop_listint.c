#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 *
 * @head: starting node
 *
 * Return: int at head node of 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}
