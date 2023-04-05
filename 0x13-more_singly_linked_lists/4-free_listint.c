#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to first node of listint_t list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *free_t;

	while (head)
	{
		free_t = head->next;
		free(head);
		head = free_t;
	}
}
