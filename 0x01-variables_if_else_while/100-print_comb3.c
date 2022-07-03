#include <stdio.h>
/**
 * main - main block of code
 *Description:a program that prints a combination of two digits all
 *separated by commas,followed by a new line using the putchar function .
 * Return:0(Success)
 */
int main(void)
{
int v;
int o;
for (v = '0'; v <= '9'; v++)
{
for (o = '1'; o <= '9'; o++)
{
if (o > v)
{
putchar(v);
putchar(o);

if (v != 8 || 0 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}

return (0);
}
