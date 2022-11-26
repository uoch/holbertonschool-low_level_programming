#include "hash_tables.h"
/**
 * hash_table_print - ints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int test = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				if (test > 0)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				test++;
				ht->array[i] = ht->array[i]->next;
			}
		}
		i++;
	}
	printf("}\n");
}
