#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of the list
 * @head: pointer to the head
 * @n: integer to add to the list
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;

	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (ptr);
}
