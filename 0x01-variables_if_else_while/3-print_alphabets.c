#include <stdio.h>
#include <stdlib.h>
/**
 * main - print both the upper case and the lower case of an alphabet.
 * Return: Always 0 (success)
 */
int main(void)
{
	int alph = 'a';
	int ALPH = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (ALPH <= 'Z')
	{
		putchar(ALPH);
		ALPH++;
	}
	putchar('\n');
		return (0);
}
