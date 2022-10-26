#include "lists.h"

/**
 * sum_listint - adds all n values in the listint_t list
 * @head: the pointer in the head node
 * Return: sum of all n values, 0 for empty list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
