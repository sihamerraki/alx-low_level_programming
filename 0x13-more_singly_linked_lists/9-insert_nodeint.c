#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at 
 * a given position.
 * @head: pointer first node in the list 
 * @idx: index of the list where the new node should be added. Index starts at 0
 * @n: data in the nex node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = * head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;
	if (idx == 0)
	{
		(*new).next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			(*new).next = (*temp).next;
			(*temp).next = new;
			return (new);
			}
		else
			temp = (*temp).next;
	}
	return (NULL);
}
