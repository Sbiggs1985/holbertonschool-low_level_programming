#include "lists.h"
/**
 * free_listint2 - Entry Point
 * @head: Head
 * Return: Depends
 */
void free_listint2(listint_t **head)
{
	if (!(head))
		return;
	free_listint(*head);
	*head = NULL;
}
