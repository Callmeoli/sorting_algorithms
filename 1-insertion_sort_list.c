#include "sort.h"
/**
 * insertion_sort_list - sort list using insertion method
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	int *key;
 	listint_t *head;
 	listint_t *j;
 	head = *list;
 	j = *list;


	for(head = head->next; head != NULL; head = head->next)
	{
		key = head->n; 
		j = head->prev;


		while(j != NULL && j->n > key)
		{
			j->next = j; 
			j = j->prev;
		}
		j->next = head;
	}
}
