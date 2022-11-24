#include "lists.h"

/**
 * printBeforeMain - prints a string before main executes
 * Return: Nothing
*/
void __attribute__ ((constructor)) printBeforeMain(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
