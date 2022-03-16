#ifndef myheader
#define myheader
#include <unistd.h>
ssize_t write(int f, const void *buf, size_t nbyte);
int _putchar(char c){
	return (write(1, &c, 1));
}
#endif
