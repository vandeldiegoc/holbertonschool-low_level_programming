#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: previous node
 * @next: next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
struct listint_s *prev;
} dlistint_t;

size_t dlistint_len(const dlistint_t *h);
#endif
