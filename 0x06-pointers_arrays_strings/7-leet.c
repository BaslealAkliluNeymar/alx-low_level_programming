#include "main.h"

/**
* leet - codes the message given to it
* @c: values of the letters
* Return: the encoded character
*/

char *leet(char *c)
{
char *a = "aAeEoOtTlL";
char *b = "4433007711";

int i;
int j;
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (c[i] == a[j])
{
c[i] = b[j];
}
}
}
return (c);
}
