#include <stdio.h>
/**
 * main - prints to std output sizes of various types
 * sizeof - calculates the number of bytes of type passed
 * Return: Zero if code runs without error
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", (long) sizeof(double));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(float));
	return (0);
}
