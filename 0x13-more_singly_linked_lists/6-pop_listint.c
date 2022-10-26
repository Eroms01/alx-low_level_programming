#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to head node
 * Return: the value of n in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
