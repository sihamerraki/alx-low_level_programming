#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: first node in the linked list
 * @index: index if the node to return
 * Return: pointer to the node we're looking for, or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = (*temp).next;
		i++;
	}
	return temp ?: NULL;
}
