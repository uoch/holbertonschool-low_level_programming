#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t nb = 0;
	const listint_t *current = head;
	const listint_t *addresses[1024];

	if (head == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		for (size_t i = 0; i < nb; i++)
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
