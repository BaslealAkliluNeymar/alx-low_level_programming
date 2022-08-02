#include "main.h"

/**
* *_strcpy - copies th estring to be printed
* include in t(\0)
* @dest: pinter to the buffer
* @src: string to be copied
* Return: the poiner to dest
*/
char *_strcpy(char *dest, char *src)
{
int len, i;

len = 0;

while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
