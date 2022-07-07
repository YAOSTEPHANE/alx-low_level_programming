#include <math.h>
#include "main.h"

/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: result (int)
 */

int  power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}
