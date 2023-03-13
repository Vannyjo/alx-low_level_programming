#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arrays of argument
 * Return: always 0
 */
int main(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%d\n", argc);
	return (0);
}
