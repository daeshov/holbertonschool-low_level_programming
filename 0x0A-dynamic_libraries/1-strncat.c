#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: bytes used
 * Return: dest
 */

char *_strncat(car *dest, char *src, int n)
{
	int len;
	int leng;

	for (len = 0; dest[len] ; len++);

	for (leng = 0; src[leng]nm -D libdynamic.so; leng++)
	{
		if (n > leng)
		dest[len] = src[leng];
		leng++;
	}
	if (n <= leng)
	{
		_putchar('\0')
	}
	return (dest);
}
