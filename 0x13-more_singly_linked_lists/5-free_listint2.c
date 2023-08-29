#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to the address of the first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
