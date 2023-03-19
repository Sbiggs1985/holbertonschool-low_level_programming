#include "lists.h"
/**
 * free_listint - Entry Point
 * @head: Head node
 * Return: 0.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
