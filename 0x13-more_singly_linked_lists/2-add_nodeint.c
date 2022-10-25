#include "lists.h"

/**
 * add_nodeint - adds a node to the start of the linked list
 * @head: pointer to the head node
 * @n: integer to add to the beginning of the node
 * Return: address of new element, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = *head;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (temp);
}
