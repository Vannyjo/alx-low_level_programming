#include "main.h"
/**
 * print_alphabet_x10 - print alpahbet 10x in lower case
 * Return: void (success)
 */
void print_alphabet_x10(void)
{

	char eze;
	int i = 0;

	while (i <= 9)
	{
	for (eze = 'a'; eze <= 'z'; eze++)
	{
	_putchar(eze);

	_putchar('\n');
	i++;
	}
}
