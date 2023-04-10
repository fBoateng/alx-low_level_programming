#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @p: The number.
 * @q: The number to flip n to.
 *
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
	unsigned long int btw, check;
	unsigned int number, i;

	check = 1;
	btw = p ^ q;
	number = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (btw & check))
			number++;
		check <<= 1;
	}
	return (number);
}
