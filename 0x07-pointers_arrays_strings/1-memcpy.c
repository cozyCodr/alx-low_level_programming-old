#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination object
 * @src: pointer to the source object
 * @n: number of bytes to copy
 * @Return: pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptrDest;
	const char ptrSrc;

	ptrDest = (char *)dest;
	ptrSrc = (const char *)src;

	if ((ptrDest != NULL) && (ptrSrc != NULL))
	{
		while (n)
		{
			*(ptrDest++) = *(ptrSrc++);
			--n;
		}
	}
	return (dest);
}
