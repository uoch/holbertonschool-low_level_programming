#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @head: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, nb = 0;
	const listint_t *current = head;
	const listint_t *addresses[1024];

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		for (i = 0; i < nb; i++)
		{
			if (addresses[i] == current)
			{
				printf("[%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}
		printf("[%p] %d\n", (void *)current, current->n);
		addresses[nb] = current;
		nb++;
		current = current->next;
	}

	return (nb);
}
