#include "main.h"
#include <stdlib.h>
/**
 * _strcat - concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * Return: destination pointer
 */
char *_strcat(char *dest, char *src)
{
        int dest_len;
        char *dest_copy;

        dest_copy = _copyString(dest);
        dest_len = 0;

        while (*dest_copy != '\0')
        {   
                dest_len += 1;
                dest_copy += 1;
        }   

        while (*src != '\0')
        {   
                dest[dest_len] = *src;
                dest_len++;
                src++;
        }   
        return dest;
}
/**
 * _copyString - copys a string to a different memory location
 * @s: String to be copied
 * Return: string copied to a new memory location
 */
char* _copyString(char s[])
{
        int i;
        char* s2;

        s2 = (char*)malloc(20);

        for (i = 0; s[i] != '\0'; i++)
                s2[i] = s[i];

        return ((char*)s2);
}
