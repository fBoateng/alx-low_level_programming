#include "lists.h"

/**
 * dlistint_len - count the number of node in the linked list
 * @h: pointer to the beginning of  linked list
 *
 * Return: number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;

	for (nodes = 0; h != NULL; nodes++)
		h = h->next;
	return (nodes);
}
