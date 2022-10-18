#include "main.h"
#include <unistd.h>

/**
* _putchar - Prints passed in 'char' arguments
* on the screen
* ch -  Parameter to be printed out
*/

void _putchar(char ch)
{
/**
 * ch: Parameter to be printed out
 */
	write(1, ch, 2);
}
