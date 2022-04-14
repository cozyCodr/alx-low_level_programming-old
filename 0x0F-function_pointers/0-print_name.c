#include "function_pointers.h"
/**
 * print_name - uses function pointed to by pointer to print name
 * @name: name to be printed
 * @f: function pointed to that prints name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
