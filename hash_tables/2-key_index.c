#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 *@key: key to be mapped
 *@size: size of the hash table
 *Return: index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}
