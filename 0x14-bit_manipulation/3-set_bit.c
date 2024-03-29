#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to set the bit in
 * @index: the index of the bit to set, starting from 0
 *
 * Return: 1 if successful, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	b = 1 << index;
	*n = *n | b;

	return (1);
}
