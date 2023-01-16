#include "main.h"

/**
*_islower - Tests input and returns 0 or 1
* depending on if the cahracter is loeercase or not
*
* @c: Parameter to be tested
* Return: zero if true; 1 if false
*/

int _islower(int c)
{
	char ch = c;
	int result;

	if (ch < 'a' || ch > 'z')
		result = 0;
	else
		result = 1;

	return (result);
}
