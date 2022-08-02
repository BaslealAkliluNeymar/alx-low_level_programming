#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success/correct)
*/

int main(void)
{

char base;

for (base = 48; base <= 57; base++)
{
putchar(base);
}

for (base = 97; base <= 102; base++)
{
putchar(base);
}

putchar('\n');

return (0);

}
