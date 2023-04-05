#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: pointer to thefirst node listint_t list
 * @index: index of node starting at 0
 * Return: nth node, if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *new = head;

	while (new && count < index)
	{
		new = new->next;
		count++;
	}
	return (new ? new : NULL);
}
