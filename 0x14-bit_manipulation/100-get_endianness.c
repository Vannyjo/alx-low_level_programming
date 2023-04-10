#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int machine = 1;
	char *check = (char *) &machine;

	if (*check)
		return (1); /* little endian */
	else
		return (0); /* big endian */
}
