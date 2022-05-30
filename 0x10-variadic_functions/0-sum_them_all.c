#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	int nextInt;
	va_list args;
	va_start(args, n);

	if (n == 0)
		return (0);
	sum = 0;
	nextInt = va_arg(args, int);

	for (i = 0; i < n; nextInt = va_arg(args, int))
	{
		sum += nextInt;
	}
	va_end(args);
}
