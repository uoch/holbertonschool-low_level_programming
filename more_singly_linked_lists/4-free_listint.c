#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *trash;

	while (head)
	{
		trash = head;
		head = head->next;
		free(trash);
	}
}
