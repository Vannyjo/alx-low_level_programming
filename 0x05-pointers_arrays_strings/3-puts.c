#include "main.h"
/**
 * _puts - parameter tht prints string
 * @str: entry point
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
