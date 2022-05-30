#include <stdio.h>

int get_endianness(void)
{
	unsigned int i;
	char *c = (char *) & i;

	c = (char *) & i;
	if (*c)
		return (1);
	else 
		return (0);
}

int countSetBits(int n)
{
    unsigned int count;

    count = 0;
    while (n > 0)
    {
        count++;
        n &= (n-1);
    }
    return count;
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n^m));
}

int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}