#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of listint_t list
 * @head: pointer to the first element of the list
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new = *head;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	while (new->next)
	{
		new = new->next;
	}
	new->next = current;
	return (current);
}
