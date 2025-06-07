#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints list of nodes
 *@h: head of the node
 *
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
int i;
for (i = 0; h; i++)
{
printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
h = h->next;
}

return (i);
}
