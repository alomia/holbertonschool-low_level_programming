#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: variable
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{

const listint_t *ptr = h;

int count;
count = 0;

while (ptr)
{

count++;
ptr = ptr->next;
}

return (count);
}
