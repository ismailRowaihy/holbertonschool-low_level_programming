#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint - adds a node  at the beginning
 *@head: head of the doubly linked list
 *@n: data to add to the node
 *
 *Return: new node at the beginnig
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node;

node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->prev = NULL;

if (*head == NULL)
{
node->next = NULL;
*head = node;
}
else
{
node->next = *head;
(**head).prev = node;
*head = node;
}

return (node);
}
