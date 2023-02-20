#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - print if the number is greather 5, equalls zero or less than 6.
 * Return: always 0 (success)
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, n % 10);
	}
	else if ((n % 10) < 5 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 10),
	}
	return (0);
}
