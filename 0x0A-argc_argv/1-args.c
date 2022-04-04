#include "main.h"
#include <stdio.h>
/**
 * main - prints number of command line arguments
 * @argc: number of arguments
 * @argv: array of string arguments
 * Return: zero if runs without errors
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d", argc - 1);
	putchar('\n');
	return (0);
}
