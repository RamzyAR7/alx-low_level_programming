#include "hash_tables.h"
/**
 * hash_table_print -  a function that prints a hash table.
 *
 * @ht: is the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int idx;
	unsigned long int flag = 0;

	if (ht != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			if (ht->array[idx])
			{
				if (flag == 1)
				{
					printf(", ");
				}

				tmp = ht->array[idx];
				while (tmp)
				{
					printf("'%s': '%s'", tmp->key, tmp->value);
					tmp = tmp->next;
				}
				flag = 1;
			}
		}
		printf("}\n");
	}
	else
	{
		return;
	}
}
