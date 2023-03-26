#include "lists.h"
/**
 * free_dlistint - Frees list
 * @head: Head
 * Return: Succession
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node = NULL;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
