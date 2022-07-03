#include <stdio.h>
/**
 * main - main block of code
 *Description:a program that prints a comination of single digits all separated
 * by commas,followed by a new line using the putchar function .
 * Return:0(Success)
 */
int main(void)
{
int v;
for (v = 0; v <= 9; v++)
{
putchar(v + ',');
}
putchar('\n');

return (0);
}
