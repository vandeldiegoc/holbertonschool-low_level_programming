#include "lists.h"
/**
 * print_list - is a function
 *
 * @h: is a variable
 * Return: returns i
 */
size_t print_list(const list_t *h)
{
int i = 0;
const list_t *ptr;
*ptr = h
while (ptr != NULL)
{
printf("[%d] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
i++;
}
return (i);
}
