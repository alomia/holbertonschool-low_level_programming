#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * @head:list_t
 * @str: pointer
 *
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{

list_t *new_nodo;
int i;

i = 0;

new_nodo = malloc(sizeof(list_t));

if (new_nodo == NULL)
return (NULL);

while (str[i] != 0)
i++;

new_nodo->str = strdup(str);
new_nodo->len = i;
new_nodo->next = (*head);
(*head) = new_nodo;

return (*head);
}
