#include "main.h"

/**
 * flip_bits - counts the number of bits
 * to get from one number
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, num = 0;
unsigned long int x;
unsigned long int y = n ^ m;

for (i = 63; i >= 0; i--)
{
x = y >> i;
if (x & 1)
num++;
}

return (num);
}
