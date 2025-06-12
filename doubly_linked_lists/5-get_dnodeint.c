#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - gets the index of doubly linked list
 *@head: head of the doubly linked list
 *@index: the num to get
 *
 *Return: the index of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; head; i++)
{

if (i == index)
return (head);

head = head->next;
}

return (NULL);
}
