#include "sort.h"
/**
 * insertion_sort_list - sort list using insertion algorithm
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	int j, key;
 	listint_t head;

	head = *list->next;
	while (head->next != NULL)
	{
		key = head->n;
		j = head->prev;


		while(j != NULL && j->n > key)
		{
			head->n = j;
			j = j->prev;
		}
		head->n = key;
		head = head->next
	}
}
