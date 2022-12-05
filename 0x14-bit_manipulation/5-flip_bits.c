#include "main.h"

/**
 * flip_bits - returns the number of required bit flips to get from one number
 * to another
 *
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_num;

	bit_num = 0;
	while (n || m)
	{
		if ((n & 1) != (m & 1))
			bit_num++;
		n = n >> 1;
		m = m >> 1;
	}

	return (bit_num);
}
