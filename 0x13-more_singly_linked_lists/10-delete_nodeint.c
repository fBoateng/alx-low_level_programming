#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: head node
 * @index: index of node to be deleted
 * Return: boolean value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tp, *del;
	unsigned int c = 0;

	tp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tp = tp->next;
		free(*head);
		*head = tp;
		return (1);
	}
	else
	{
		while (tp != NULL && c != index - 1)
		{
			c++;
			tp = tp->next;
		}
		if (c != index - 1)
			return (-1);
		del = tp->next;
		tp->next = tp->next->next;
		free(del);
		return (1);
	}

}
