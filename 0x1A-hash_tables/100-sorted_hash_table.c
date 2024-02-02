#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
int add_new_node_php(shash_table_t *ht, const char *key,
					 const char *value, unsigned long int idx, shash_node_t *tmp);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the created hash table, or NULL if it fails.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->shead = NULL;
	table->stail = NULL;
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}

	return (table);
}
/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key of the element.
 * @value: The value of the element.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
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
		tmp = tmp->snext;
	}

	return (add_new_node_php(ht, key, value, idx, tmp));
}
/**
 * add_new_node - Adds a new node to the hash table.
 * @ht: The hash table to add the node to.
 * @key: The key string.
 * @value: The value associated with the key.
 * @idx: The index of the array where the node should be added.
 * @tmp: tmp pointer
 * Return: 1 if successful, 0 otherwise.
 */
int add_new_node_php(shash_table_t *ht, const char *key,
					 const char *value, unsigned long int idx, shash_node_t *tmp)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
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
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to look for.
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	idx = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table.
 * @ht: The hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht != NULL)
	{
		temp = ht->shead;
		printf("{");
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->snext;
			if (temp)
				printf(", ");
		}
		printf("}\n");
	}
	else
	{
		return;
	}
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order.
 * @ht: The hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht != NULL)
	{
		temp = ht->stail;
		printf("{");
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->sprev;
			if (temp)
				printf(", ");
		}
		printf("}\n");
	}
	else
	{
		return;
	}
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int idx;
	shash_node_t *currnt, *tmp;

	if (ht != NULL)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			currnt = ht->array[idx];

			while (currnt)
			{
				tmp = currnt;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				currnt = currnt->next;
			}
		}
		free(ht->array);
		free(ht);
	}
	else
	{
		return;
	}
}
