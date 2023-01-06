#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *tail = NULL;

	while (curr != NULL)
	{
		tail = curr->next;
		curr->next = tail->next;
		tail->next = *head;
		*head = tail;
		curr = curr->next;
	}

	return (*head);
}
