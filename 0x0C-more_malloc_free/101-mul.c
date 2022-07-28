#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int som1, char *som2[])
{
unsigned long mul;
int i, j;
	if (som1 != 3)
	{ printf("Error\n");
	exit(98); }
	for (i = 1; i < som1; i++)
	{
		for (j = 0; som2[i][j] != '\0'; j++)
		{
			if (som2[i][j] > 57 || som[i][j] < 48)
			{  printf("Error\n");
				exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
