#include "main.h"
/**
 * swap_int - entry point
 * @a: paramerter to swap
 * @b: parameter to swap
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
