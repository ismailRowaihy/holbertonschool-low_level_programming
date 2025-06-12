#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - adds a node  at the end of doubly linked list
 *@head: head of the doubly linked list
 *@n: data to add to the node
 *
 *Return: new node at the end
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node, *check;

check = *head;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->next = NULL;

if (*head == NULL)
{
node->prev = NULL;
*head = node;
}
else
{
while (check->next != NULL)
check = check->next;

check->next = node;
node->prev = check;
}

return (node);
}
