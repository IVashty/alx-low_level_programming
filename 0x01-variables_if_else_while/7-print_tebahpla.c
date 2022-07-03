#include <stdio.h>
/**
 * main - main block of code
 * Description:a program that prints the alphabet in lowercase,
 * *followed by a new line using the putchar function .
 * Return:0(Success)
 */
int main(void)
{
char v;
for (v = 'z'; v >= 'a'; v--)
{
putchar(v);
}
putchar('\n');

return (0);
}
