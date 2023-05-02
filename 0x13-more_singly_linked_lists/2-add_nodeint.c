#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the first node.
 * @n: integer.
 *
 * Return: address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->n = n;

	*head = new;

	return (*head);
}
