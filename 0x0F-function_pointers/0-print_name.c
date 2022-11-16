#include "function_pointers.h"
<<<<<<< HEAD

/**
  * print_name - prints a name
  * name: name to be printed
  * @f: pointer to function
  * Return: no return
  */

void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
=======
#include <stdlib.h>

/**
 * print_name - prints a name.
 * @name: the name to be printed out
 * @f: pointer to pointer
*/
>>>>>>> a4339fce8c2e7b90cc9d2e385928cb0472260520
