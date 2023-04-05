#include "lists.h"

/**
 * free_listint2 - frees listint_t list
 * @head: pointer to first node of listint_t list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
