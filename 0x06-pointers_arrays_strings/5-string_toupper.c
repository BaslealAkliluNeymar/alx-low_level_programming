#include "main.h"
/**
* string_toupper -  changes the string to upper case
* @s: the variable to be chnged
* Return: the vhanges cariale is returned
*/

char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
return (s);
}
