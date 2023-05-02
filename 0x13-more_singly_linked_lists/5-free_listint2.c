#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer to the first node.
 *
 * Return: void.
 */

void free_listint2(listint_t **head)
{
	listint_t *cur, *tmp;

	if (head != NULL)
	{
		cur = *head;

		while ((tmp = cur) != NULL)
		{
			cur = cur->next;

			free(tmp);
		}

		*head = NULL;
	}
}
