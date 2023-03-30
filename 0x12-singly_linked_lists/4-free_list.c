#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - a linked list
 * @head: the beginning of tje list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(->str);
	free(head);
}
