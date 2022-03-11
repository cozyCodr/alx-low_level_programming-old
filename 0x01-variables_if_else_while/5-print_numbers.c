#include <stdio.h>
/**
 * main - prints all single digit numbers less that 10
 * Return: Zero if code runs without exception
 */
int main(void)
{
	int i;
	
	for (i = 0; i < 10; i = i + 1)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
