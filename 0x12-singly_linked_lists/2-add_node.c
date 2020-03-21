#include "lists.h"

unsigned int _strlen(char *str)
{
unsigned int i;
for (i = 0; str[i]; i++)
;
return (i);
}

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
if (str == NULL)
{
return (NULL);
}
new = malloc(sizeof(list_t));
if (new == NULL )
{
return (NULL);
}
if (new->str == NULL)
{
free(new);
return(NULL);
}

new->len = strlen(new->str);
new->next = *head;
*head = new;
return (new);

}
