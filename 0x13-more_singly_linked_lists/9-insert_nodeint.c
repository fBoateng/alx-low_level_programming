#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at index
 * @head: head node
 * @idx: index of node
 * @n: value of head node
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *tmp, *newNode;

	if (head == NULL)
		return (NULL);

	tmp = *head;
	while (tmp != NULL && counter != idx - 1)
	{
		tmp = tmp->next;
		counter++;
	}

	if (counter != idx - 1 && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx != 0)
	{
		newNode->next = tmp->next;
		tmp->next = newNode;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
