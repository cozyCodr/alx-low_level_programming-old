#ifndef MAIN_H_
#define MAIN_H_
#include <unistd.h>
int _putchar(char c);
ssize_t write(int fd, const void *buf, size_t count);
#endif

int _putchar(char c)
{
	return (write(1, &c, 1));
}
