#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the amount change
 * @argc: number of arguments passed
 * @argv: array of string arguments
 * Return: 0 if run without errors
 */
int main(int argc, char **argv)
{
	int i;
	int count;
	int balance;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	count = 0;
	balance = atoi(argv[1]);

	if (balance < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		count += balance / change[i];
		if ((balance % change[i]) == 0)
			break;
		balance = balance % change[i];
	}

	printf("%d\n", count);
	return (0);
}
