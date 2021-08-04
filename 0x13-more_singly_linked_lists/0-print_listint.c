#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: variable
 *
 * Return: count
 */
size_t print_listint(const listint_t *h)
{

const listint_t *ptr = h;

int count;
count = 0;

while (ptr)
{

printf("%d\n", ptr->n);
count++;
ptr = ptr->next;
}

return (count);
}
