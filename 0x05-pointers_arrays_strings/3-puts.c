#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	int steph;

	for (steph = 0; str[steph] != '\0'; steph++)
	{
		_putchar(str[steph]);
	}
	_putchar('\n');
}
