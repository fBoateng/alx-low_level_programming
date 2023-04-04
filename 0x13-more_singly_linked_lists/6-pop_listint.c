#include "lists.h"

/**
 * pop_listint - pops node
 * @head: list address
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (num);
	tmp = *head;
	num = tmp->n;
	free(*head);
	*head = tmp->next;

	return (num);
}
