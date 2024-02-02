#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *currnt, *tmp;

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
