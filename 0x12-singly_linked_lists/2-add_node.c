#include "lists.h"
/**
 * _strlen - is a function
 * @str: is a variable
 *  Return: 0
 */
unsigned int _strlen(char *str)
{
unsigned int i;
for (i = 0; str[i]; i++)
{
}
return (i);
}
/**
 * add_node - is a function
 * @head: is a variable
 * @str: is a variable
 *  Return: new
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
if (str == NULL)
{
return (NULL);
}
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);

if (new->str == NULL)
{
free(new);
return (NULL);
}

new->len = _strlen(new->str);
new->next = *head;
*head = new;
return (new);

}
