#include "hash_tables.h"
/**
 * key_index - the djb2 algorithm
 * @key: key
 * @size: string
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

unsigned long int index;

index = hash_djb2(key) % size;

return (index);
}
