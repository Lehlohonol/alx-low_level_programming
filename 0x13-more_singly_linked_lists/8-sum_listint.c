#include "lists.h"

/**
 * Prototype: sum_listint - function to return the sum of data in a list
 * @head: pointer to the list;
 * Return: sum or 0. being null
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
