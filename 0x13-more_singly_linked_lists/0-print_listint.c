#include "lists.h"



size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
        int i = 0;

	
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h-> next;
	i++;	
	}
	return (i);
}


