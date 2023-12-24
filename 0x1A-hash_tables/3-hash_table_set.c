#include "hash_tables.h"
/**
 * create_node - creates an element
 * @key: the key
 * @value: the value of the element
 * Return: a pointer to the node created
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}
/**
 * hash_table_set - sets a an element in the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value of the element
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *curr_node;
	unsigned long int index;

	if (key == NULL)
		return (0);

	node = create_node(key, value);
	index = key_index((const unsigned char *)key, 1024);
	curr_node = ht->array[index];
	if (curr_node == NULL)
		ht->array[index] = node;
	else
	{
		node->next = curr_node->next;
		ht->array[index] = node;
	}
	return (1);
}
