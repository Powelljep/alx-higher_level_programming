#include "lists.h"
/**
 * check_cycle -  checks if a singly linked list has a cycle in it.
 * @list: head of the list to check
 * Description: checks if a singly linked list has a cycle in it
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast_list, *slow_list;

	if (list ==  NULL && list->next == NULL)
		return 0;
	fast_list = list;
	slow_list = list;
	while (fast_list != NULL && fast_list->next != NULL)
	{
		slow_list = slow_list->next;
		fast_list = fast_list->next;
		if (slow_list == fast_list)
			return 1;
	}
	return 0;
}
