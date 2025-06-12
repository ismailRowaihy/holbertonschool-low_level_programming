#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - delete the index of doubly linked list
 *@head: head of the doubly linked list
 *@index: the index to delete
 *
 *Return: 1 if worked -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *check;

check = *head;

for (i = 0 ; check != NULL; i++)
{

if (i == index)
{
if (check->prev == NULL)
*head = check->next;
else
check->prev->next = check->next;

if (check->next != NULL)
check->next->prev = check->prev;

free(check);
return (1);
}

check = check->next;
}

return (-1);
}
