#include "hash_tables.h"

/**
	* main - checks the code
	*
	* Return: Always EXIT_SUCCESS
*/
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "hetairas", "darius");
	hash_table_set(ht, "mentioner", "ape");
	hash_table_set(ht, "depravement", "grass");
	hash_table_set(ht, "neurospora", "Flash");
	hash_table_set(ht, "dram", "flops");
	hash_table_set(ht, "vivency", "last");

	hash_table_print(ht);

	return (EXIT_SUCCESS);
}
