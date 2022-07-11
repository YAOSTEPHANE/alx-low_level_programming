#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int steph;

	for (steph = 0; s[steph] != '\0'; steph++)
		;
	for (steph = steph - 1; s[steph] != '\0'; steph--)
	{
		_putchar(s[steph]);
	}
	_putchar('\n');
}
