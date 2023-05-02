#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: pointer to the first node.
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int first;

	listint_t *tmp, *next;

	if (*head == NULL)
		return (0);

	tmp = *head;

	next = tmp->next;

	first = tmp->n;

	free(tmp);

	*head = next;

	return (first);
}
