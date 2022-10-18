#include "main.h"

/**
* _islower - Tests input and returns 0 or 1 
* depending on if the cahracter is loeercase or not
*/

int _islower(int c)
{
	char ch = c;

	if ((ch < 'a') || (ch > 'z'))
	{
		result = 0;
	}
	else
	{
		result = 1;
	}

	return (result);
}
