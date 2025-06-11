#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - prints doubly linked list 
 *@h: head of the doubly linked list
 *
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
int i;
for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}

return (i);
}
