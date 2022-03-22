#include "main.h"
/**
 * rev_string - reverses string in memory
 * @s: subject string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len;
	int rsl;
	char string[1000];
	int revstring;

	len = 0;
	while (*s != '\0')
	{
		string[len] = *s;
		len += 1;
		s += 1;
	}
	for (rsl = 0; rsl < len / 2; rsl++)
	{
		revstring = s[rsl];
		s[rsl] = s[len - rsl - 1];
		s[len - rsl -1] = revstring;
	}
	string = "";
}
