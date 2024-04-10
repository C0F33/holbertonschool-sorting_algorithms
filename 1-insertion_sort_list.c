#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insertion_sort_list - sorts doubly linked list integers in ascending order
 * @list: head node of linked list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current;
	if (*list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		listint_t *prev = current->prev;
		listint_t *next = current->next;
		int key = current->n;

	while (prev != NULL && prev->n > key)
	{
		if (prev->prev != NULL)
			prev->prev->next = current;
		if (current->next != NULL)
			current->next->prev = prev;
		prev->next = current->next;
		current->prev = prev->prev;
		current->next = prev;
		prev->prev = current;

		if (current->prev == NULL)
		*list = current;

		prev = current->prev;
	print_list(*list);
	}

	current = next;
	}
}
