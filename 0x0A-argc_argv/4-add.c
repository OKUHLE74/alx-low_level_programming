#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of args positive number
 * @argc: argument count
 * @argv: argument vector
 *
 * Retuen: Always zero
 */

int main(int argc, char *argc[])
{
	int i;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			e = argv[i];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (0);
				}
			}
		}
	}
	return (0);
}
