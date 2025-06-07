#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_node_end - adds a node at the end
 *@head: head of the node
 *@str: string append on the new node
 *
 *Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
int i;
list_t *node;
list_t *check;

check = *head;
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
node->next = NULL;

 if (*head == NULL)
   {
     *head = node;
     return (node);
   }
 else
   {
     while (check->next != NULL)
       check = check->next;

     check->next = node;
   }

return (node);
}
