#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments passed
 * @argv: array of string arguments
 * Return: 0 if run without errors
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
