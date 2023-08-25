#include <stdio.h>

/**
 * add - Add two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The result of the addition.
 */
int add(int a, int b)
{
	return a + b;
}

/**
 * subtract - Subtract two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The result of the subtraction.
 */
int subtract(int a, int b)
{
	return a - b;
}

/**
 * multiply - Multiply two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The result of the multiplication.
 */
int multiply(int a, int b)
{
	return a * b;
}

/**
 * divide - Divide two numbers.
 * @a: First number (dividend).
 * @b: Second number (divisor).
 *
 * Return: The result of the division.
 */
float divide(int a, int b)
{
	if (b != 0)
		return (float)a / b;
	else
	{
		printf("Error: Division by zero\n");
		return 0;
	}
}

/**
 * modulus - Calculate the modulus of two numbers.
 * @a: First number (dividend).
 * @b: Second number (divisor).
 *
 * Return: The result of the modulus operation.
 */
int modulus(int a, int b)
{
	if (b != 0)
		return a % b;
	else
	{
		printf("Error: Modulus by zero\n");
		return 0;
	}
}
