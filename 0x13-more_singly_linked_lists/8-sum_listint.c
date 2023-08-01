#include "lists.h"
/**
 * sum_listint_t - sum of all the data (n) of a listint_t linked list.
 *
 * @head: first node in linked list
 * Return: result of the sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += (*temp).n;
		temp = (*temp).next;
	}
	return (sum);
}
