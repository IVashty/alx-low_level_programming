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
int t;
for (v = '0'; v <= '9'; v++)
{
for (o = '1'; o <= '9'; o++)
{
for (t = '2'; t <= '9'; t++)
{
if (o > v && t > v && t > o)
{
putchar(v);
putchar(o);
putchar(t);
if (v != '7' || o != '8' || t != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
{
putchar('\n');
}
return (0);
}
