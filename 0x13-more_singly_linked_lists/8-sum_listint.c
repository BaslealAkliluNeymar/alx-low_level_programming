#include "lists.h"

/**
 * sum_listint - returns sum of all the values in a listint_t list
 * @head: first node in the linked list
 *
 * Return: returing sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tem = head;

while (tem)
{
sum += tem->n;
tem = tem->next;
}

return (sum);
}
