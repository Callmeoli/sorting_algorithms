#include "sort.h"
/**
 * insertion_sort_list - sort list using insertion algorithm
 * @list: list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	int tmp, *p;
 	listint_t *head, *j;

	head = *list;
	while (head->next != NULL)
	{
		if (head->n > head->next->n)
		{
			p = (int *)&(head->next->n);
			tmp = head->next->n;
			*p= (int)head->n;
			p = (int *)&(head->n);
			*p = tmp;
			print_list(*list);
		}
		j = head;
		while(j->prev != NULL)
		{
			if (j->prev->n > j->n)
			{
				tmp =j->n;
				p = (int *)&(j->n);
				*p =(int)j->prev->n;
				p = (int *)&(j->prev->n);
				*p = tmp;
				print_list(*list);
			}
			j = j->prev;
		}
		head = head->next;
	}
}
