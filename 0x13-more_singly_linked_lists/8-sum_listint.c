#include "lists.h"

/**
 * sum_listint - sum all data nodo in link list
 * @head: pointer head
 * Return: sum
 */



int sum_listint(listint_t *head)
{

	int i, sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
	i = head->n;
	sum += i;
	head = head->next;
	}
	return (sum);
}

