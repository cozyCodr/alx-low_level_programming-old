#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments passed
 * @argv: array of string arguments
 * Return: 0 if run without errors and 1 if it runs with errors
 */
int main(int argc, char **argv)
{
	int first;
	int sec;
	int product;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		first = atoi(argv[1]);
		sec = atoi(argv[2]);
		product = first * sec;

		printf("%d\n", product);
		return (0);
	}
}
