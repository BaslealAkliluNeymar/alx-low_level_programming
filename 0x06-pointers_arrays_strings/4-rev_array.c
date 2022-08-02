#include "main.h"

/**
* reverse_array - reversese my array
* @a: that array to e reversed
* @n: length of array
*/

void reverse_array(int *a, int n)
{
int i;
int tmp;

for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = tmp;
}
}
