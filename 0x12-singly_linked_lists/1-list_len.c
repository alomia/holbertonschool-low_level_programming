#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: const
 *
 * Return: i
 */
size_t list_len(const list_t *h)
{

size_t i;
i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
