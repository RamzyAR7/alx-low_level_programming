#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		/* for update your hash table*/
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		tmp = tmp->next;
	}
	/*add new node to the hash table*/
	return (add_new_node(ht, key, value, idx));
}
/**
 * add_new_node - Adds a new node to the hash table.
 * @ht: The hash table to add the node to.
 * @key: The key string.
 * @value: The value associated with the key.
 * @idx: The index of the array where the node should be added.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int add_new_node(hash_table_t *ht, const char *key,
				 const char *value, unsigned long int idx)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
	{
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	/*add new node to the first of the list*/
	new->next = ht->array[idx];
	/*update the array with the new node*/
	ht->array[idx] = new;

	return (1);
}
