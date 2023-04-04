#include "lists.h"

/**
 * listint_len - length of list
 * @h: struct to traverse
 * Return: amount of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
