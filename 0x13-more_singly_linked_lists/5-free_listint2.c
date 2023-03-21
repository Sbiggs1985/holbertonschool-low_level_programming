#include "lists.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * free_listint2 - Entry Point
 * @head: Head
 * Return: 0.
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
