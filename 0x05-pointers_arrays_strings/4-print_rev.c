#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; 1--)
		_putchar(s[i]);

	_putchar('\n');
}
