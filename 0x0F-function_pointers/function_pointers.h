#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*function that prints a name*/
void print_name(char *name, void (*f)(char *));

/*function given as a parameter on each element of an array*/
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
