#include <stdio.h>
/**
 * main - main block of code
 * Description:a program that prints the alphabet in lowercase,
 * *followed by a new line using the putchar function but do not print e and q.
 * Return:0(Success)
 */
int main(void)
{
char v;
for (v = 'a'; v <= 'z'; v++)
{
if (v != 'q' && v != 'e')
{
putchar(v);
}
}
putchar('\n');

return (0);
}
