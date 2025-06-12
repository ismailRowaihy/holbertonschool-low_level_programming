#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a new node at the index of doubly linked li
 *@h: head of the doubly linked list
 *@idx: the index num to add the node
 *@n: the data to add to the node
 *
 *Return: new node at index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *node, *check;

check = *h;

if (idx == 0)
return (add_dnodeint(h, n));

for (i = 1; check != NULL && i < idx ; i++)
check = check->next;

if (check == NULL)
return (NULL);

if (check->next == NULL)
return (add_dnodeint_end(h, n));

node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->prev = check;
node->next = check->next;
check->next->prev = node;
check->next = node;

return (node);
}
