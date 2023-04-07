#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; ++index)
	{
		printf(" [%lu]: ", index);
		temp = ht->array[index];
		while (temp != NULL)
		{
			printf("(%s: %s ", temp->key, temp->value);
			temp = temp->next;
		}
		printf("\n");
	}
	printf("}\n");
}
