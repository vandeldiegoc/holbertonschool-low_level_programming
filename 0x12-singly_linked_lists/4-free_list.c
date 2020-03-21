#include "lists.h"
/**
*free_list - function
*@head: header
*/
void free_list(list_t *head)
{
list_t *ptrf;
while (head != NULL)
{
ptrf = head;
head = head->next;
free(ptrf->str);
free(ptrf);
}
}
