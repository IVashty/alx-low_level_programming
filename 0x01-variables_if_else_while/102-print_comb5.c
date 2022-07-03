#include <stdio.h>

#include <stdio.h>
/**
 * main - main block of code
 *Description:a program that prints a combination of three digits all
 *separated by commas,followed by a new line using the putchar function .
 * Return:0(Success)
 */
int main(void)
{
int v;
int o;
for (v = 0; v <= 100; v++)
{
for (o = 0; o <= 100; o++)
{
if (v < o)
{
putchar(v / 10 + '0');
putchar(v % 10 + '0');
putchar(' ');
putchar(o / 10 + '0');
putchar(o % 10 + '0');
if (v != 98 || o != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
{
putchar('\n');
}
return (0);
}
