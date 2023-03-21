#include "lists.h"
/**
 * free_listint2 - Frees a linked list of integers
 * @head: Pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}

	*head = NULL;
}
