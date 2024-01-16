#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - sorts by insertion method.
 * @list: list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *track = *list, *compared_1, *compared_2, *prev_track;
	int n_1, n_2;

	while (track && track->next)
	{
		compared_1 = track;
		compared_2 = track->next;
		n_1 = compared_1->n;
		n_2 = compared_2->n;
		if (n_1 > n_2)
		{
			while (compared_1 && n_1 > n_2)
			{
				prev_track = compared_1->prev;
				compared_2->prev->next = compared_2->next;
				if (compared_2->next)
					compared_2->next->prev = compared_2->prev;
				compared_2->prev = compared_1->prev;
				if (compared_1->prev)
					compared_1->prev->next = compared_2;
				compared_1->prev = compared_2;
				compared_2->next = compared_1;
				compared_1 = prev_track;
				if (compared_1)
					n_1 = compared_1->n;
				else
					*list = compared_2;
				print_list(*list);
			}
		}
		else
			track = track->next;
	}
}
