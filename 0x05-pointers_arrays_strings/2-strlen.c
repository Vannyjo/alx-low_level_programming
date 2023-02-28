#include "main.h"
/**
 * _strlen - calculates the lenght of the string
 * @s: entry point
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
