#include <stdio.h>
/**
 * main - main block of code
 * Description:a program that prints the alphabet and hexadecimal base 16 in
 *lowercase,followed by a new line using the putchar function.
 * Return:0(Success)
 */
int main(void)
{
char v;
for (v = '0'; v <= '9'; v++)
{
putchar(v);
}
for (v = 'a'; v <= 'f'; v++)
{
putchar(v);
}
putchar('\n');

return (0);
}
