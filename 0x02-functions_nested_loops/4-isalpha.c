#include "main.h"

/**
* _isalpha - Tests for alphabet characters
* @c: Parameter being tested
* Return: returns the result of the evaluation
*/

int _isalpha(int c)
{
	char ch = c;
	int result;

	if ((ch < 'A') || (ch > 'z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
