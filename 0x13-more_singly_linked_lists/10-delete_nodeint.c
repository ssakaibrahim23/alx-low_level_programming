#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index index of a listint_t list
 * @head: pointer to the first element in the list
 * @index: index of the node
 * Return: 1 Success, or -1 Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(new);
		return (1);
	}
	while (i < index - 1)
	{
		if (new == NULL || new->next == NULL)
			return (-1);
		new = new->next;
		i++;
	}
	current = new->next;
	new->next = current->next;
	free(current);
	return (1);
}
