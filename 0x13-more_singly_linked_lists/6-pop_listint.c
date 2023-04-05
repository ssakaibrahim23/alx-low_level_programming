#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first node in the listint_t list
 * Return: 0 if the linked list is empty and head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int num_n;

	if (!head || !*head)
		return (0);
	num_n = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;
	return (num_n);
}
