#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments passed
 * @argv: array of string arguments
 * Return: 0 if run without errors
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	printf("%s", argv[0]);
	putchar('\n');
	return (0);
}
