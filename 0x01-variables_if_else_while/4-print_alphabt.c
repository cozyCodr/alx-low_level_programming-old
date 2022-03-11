#include <stdio.h>
/**
 * main - prints the alphabet except q and e
 * Return: 0 if code runs without exception
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c = c + 1)
	{
		if (c == 'q' || c == 'e')
			continue;
		else
			putchar(c);
	}
	putchar('\n');
	return (0);
}
