#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint2(listint_t *head)
{
	listint_t *trash;

	if (head == NULL)
		return;
	while (head)
	{
		trash = *head->next;
		free(*head);
		*head = trash;
	}
}
