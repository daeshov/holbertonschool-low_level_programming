#include "main.h"

/**
 *_strcat - function that concatenates two strings.
 *@src: - pointer to source string.
 *@dest: - pointer to destination string.
 *Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int length, j;
length = 0;
while (dest[length] != '\0')
{
	length++;
}
for (j = 0; src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
return (dest);
}
