#include "lists.h"

/**
 * free_listint - frees the listint_t
 * @head: the pointer to the first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
