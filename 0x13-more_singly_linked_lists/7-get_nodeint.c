#include "lists.h"

/**
 * get_nodeint_at_index - get node at index.
 *
 * @head: pointer to the first node of the list.
 * @index: index of node to access.
 *
 * Return: the nth node of a listint_t linked list.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
