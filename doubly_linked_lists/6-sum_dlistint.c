#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - gets the sum of data in doubly linked list
 *@head: head of the doubly linked list
 *
 *Return: the sum of the list
 */

int sum_dlistint(dlistint_t *head)
{
int i, sum = 0;

if (head == NULL)
return (0);

for (i = 0; head; i++)
{
sum += head->n;
head = head->next;
}

return (sum);
}
