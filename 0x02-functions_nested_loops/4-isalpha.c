#include "main.h"
/**
* _isalpha - checks for alphanumeric character
* @c: teh character to be chekecd
* Return: 1 if c is a leter .0 if otherwise
*/

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
