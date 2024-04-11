#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node = NULL;
	char *sep = "";

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				printf("%s'%s': '%s'", sep, node->key, node->value);
				node = node->next;
				sep = ", ";
			}
		}
		printf("}\n");
	}
}
