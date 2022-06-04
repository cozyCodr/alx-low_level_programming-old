#include <stdio.h>
#include <string.h>
/**
 * main - prints all 2 digit combinations between 1 to 9
 * Return: 0 if program runs without error
 */
int main(void)
{
	int i, j, s, p, x;
	char tmpString[2], combs[45][2], temp[2];
	char first[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char second[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	for (i = 0; i < ((int)(sizeof(first) / sizeof(first[0]))); i++)
	{
		for (j = 0; j < ((int)(sizeof(second) / sizeof(second[0]))); j++)
		{
			if (first[i] != second[j] && first[i] < second[j])
			{
				temp[0] = first[i];
				temp[1] = second[j];
				combs[s][0] = temp[0];
				combs[s][1] = temp[1];
				s++;
			}
		}
	}
	for (p = 0; p < ((int)(sizeof(combs) / sizeof(combs[0]))); p++)
	{
		tmpString[0] = combs[p][0];
		tmpString[1] = combs[p][1];
		if (tmpString[0] == '8' && tmpString[1] == '9')
		{
			putchar(tmpString[0]);
			putchar(tmpString[1]);
			continue;
		}
		for (x = 0; x < 2; x++)
		{
			putchar(tmpString[x]);
		}
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
