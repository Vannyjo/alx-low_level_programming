#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to clear the bit in
 * @index: the index of the bit to clear, starting from 0
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
    if (index >= sizeof(unsigned long int) * 8 /* check if index is too large */

        return (-1);

    *n &= ~(1 << index); /* clear bit at index by ANDing with a mask with 0 at index position */

    return (1); /* return 1 to indicate success */
}
