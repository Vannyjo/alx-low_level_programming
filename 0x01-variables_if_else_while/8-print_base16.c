#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * maint - print the hexadecimal number in base 16
 * Return: Always 0 (success)
 */
int main(void)
{
	in d;
	char low;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
