#include "lists.h"
#include "4-free_listint.c"
/**
 * free_listint2 - Entry Point
 * @head: Head
 * Return: NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
