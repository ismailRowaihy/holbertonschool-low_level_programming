#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - returns the num of nodes
 *@h: head of the doubly linked list
 *
 *Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
int i;

for (i = 0; h; i++)
h = h->next;


return (i);
}
