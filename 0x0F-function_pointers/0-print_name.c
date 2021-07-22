#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: variable save name
 * @f: pointer function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

f(name);
}
