#include "main.h"
/**
 * _strncpy - function that copys a string
 * @src: pointer to source string
 * @dest: pointer to destination string
 * @n: number of bytes to be used
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int copystring;

for (copystring = 0; copystring < n && src[copystring] != '\0'; copystring++)
dest[copystring] = src[copystring];
for (; copystring < n; copystring++)
dest[copystring] = '\0';
return (dest);
}
