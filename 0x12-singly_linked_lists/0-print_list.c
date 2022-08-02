#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elemnts of the linked list
 * @h: pointer to the list_t list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t t = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)");
else
printf("[%u] %s\n", h->len, h->str);
t++;
h = h->next;
}
return (t);
}
