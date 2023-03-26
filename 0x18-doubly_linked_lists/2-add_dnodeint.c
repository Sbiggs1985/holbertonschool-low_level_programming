#include "lists.h"
/**
 * add_dnodeint - Adding a new node
 * @head: Input
 * @n: Input
 * Return: A new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeoff(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	temp_node = *head;
	*head = new_node;
	new_node->next = temp_node;

	if (temp_node != NULL)
		temp_node->prev = *head;

	return (new_node);
}
