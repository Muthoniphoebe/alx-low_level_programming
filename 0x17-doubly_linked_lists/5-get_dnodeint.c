#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: address of the node, or if it does not exist, NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
