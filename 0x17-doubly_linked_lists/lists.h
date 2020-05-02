#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct listint_s
{
int n;
struct listint_s *next;
struct listint_s *prev;
} dlistint_t;

size_t dlistint_len(const dlistint_t *h);
#endif
