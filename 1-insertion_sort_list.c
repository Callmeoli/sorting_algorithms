#include "sort.h"
/**
 * insertion_sort_list - sort list using insertion method
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	int j, key;
 	listint_t head;

	for(head = *list->next; head->next != NULL; head = head->next)
	{
		key = head->n; 
		j = head->prev;


		while(j != NULL && j->n > key)
		{
			head->n = j; 
			j = j->prev;
		}
		head->n = key;
	}
}