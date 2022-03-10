#include <stdio.h>
#include <string.h>
/**
 * main - prints quote to output
 * fprintf - writes passed string to standard error
 * firstStr: stores first part of string
 * secStr: stores second part of string
 * Return: One if successful
 */
int main(void)
{
	char firstStr[] = "and that piece of art ";
	char secStr[] = "is useful\" - Dora Korpar, 2015-10-19";
	fprintf(stderr, "%s", strcat(firstStr, secStr));
	return (1);
}
