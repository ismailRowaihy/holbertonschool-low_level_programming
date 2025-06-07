#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node - adds a node at the start
 *@head: head of the node
 *@str: string append on the new node
 *
 *Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
int i;
list_t *node;

for (i = 0; str[i]; i++)
;
node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);

node->str = strdup(str);
if (node->str == NULL)
{
free(node);
return (NULL);
}

node->len = i;
node->next = *head;
*head = node;

return (node);
}
