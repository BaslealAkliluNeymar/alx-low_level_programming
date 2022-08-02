#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at an index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int num = 0;
listint_t *tem = head;

while (tem && num < index)
{
tem = tem->next;
num++;
}

return (tem ? tem : NULL);
}
