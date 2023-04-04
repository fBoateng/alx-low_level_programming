#include "lists.h"

/**
 * sum_listint - sum the list
 * @head: head node
 * Return: sum value
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int add = 0;

	tmp = head;
	while (tmp != NULL)
	{
		add += tmp->n;
		tmp = tmp->next;
	}

	return (add);
}
