#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - counts the num of nodes
 *@h: head of the node
 *
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
int i;

for (i = 0; h; i++)
h = h->next;

return (i);
}
