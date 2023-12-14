#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at the end of a list
 *
 * @head: The address of the pointer to the first element of the list
 * @n: The number to store in the new element
 *
 * Return: A pointer to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn;
	dlistint_t *ln;
	int copy;

	ln = *head;
	if (head == NULL)
		return (NULL);
	memcpy(&copy, &n, sizeof(int));
	nn = malloc(sizeof(dlistint_t));
	if (nn == NULL)
	{
		free(nn);
		return (NULL);
	}
	nn->n = copy;
	nn->next = NULL;
	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}
	while (ln->next != NULL)
		ln = ln->next;
	ln->next = nn;
	return (ln);
}
