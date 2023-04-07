#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	char *div;

	if (ht == NULL)
		return;

	printf("{");
	div = "";
	for (index = 0; index < ht->size; ++index)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			printf("%s'%s': '%s'", div, temp->key, temp->value);
			div = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
