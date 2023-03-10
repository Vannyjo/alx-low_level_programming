#include "main.h"
/**
 * _pow_recursion - Entry point
 * @y: lower than 0, then return 1
 * Return: 1
 */
int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		_pow_recursion(n = (x * (x * y) - 1));
	}
	return (1);
}
