#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_list - frees a whole linked list
 *@head: head of linked list to free
 *
 *Return: nothing
 */
void free_list(list_t *head)
{
list_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
