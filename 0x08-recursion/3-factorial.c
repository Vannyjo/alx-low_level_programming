#include "main.h"
/**
 * factorial - Entry point
 * @n: if n is lower than 0, return -1 else return 0
 * Return: 0
 */
int factorial(int n)
{
	int jo;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		jo = (n * factorial(n - 1));
	}
	return (jo);
}
