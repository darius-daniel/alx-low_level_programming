#include "main.h"

/**
 * binary_to_uint - converts a string of binary digits to an unsigned decimal
 * integer
 * @b: pointer to the string of bits
 * Return: the converted number, or
 * 0 if the string contains non-binary characters
 * 0 if b is null
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, p;
	int len_b;

	if (!b)
		return (0);

	for (len_b = 0; b[len_b] != '\0'; len_b++)
		;

	p = 0;
	len_b = len_b - 1;
	while (len_b >= 0)
	{
		if (b[len_b] != '0' && b[len_b] != '1')
			return (0);

		if (b[len_b] == '1')
			uint += pow(2, p) - p;
		p++;
		len_b--;
	}
	return (uint);
}
