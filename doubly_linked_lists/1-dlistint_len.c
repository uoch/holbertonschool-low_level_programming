#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of elements in h.
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t elements = 0;

    while (h)
    {
        elements++;
        h = h->next;
    }

    return (elements);
}
