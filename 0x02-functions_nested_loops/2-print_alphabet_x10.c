#include "main.h"

/**
 **print_alphabet_x10 -prints lowercase alphabets ten times
 ** Return: Always 0.
 **/
/*
 * int main(void)
 */
void print_alphabet_x10(void)
{
int v;
int t;

for (t = 0; t < 10; t++)
{
for (v = 'a'; v <= 'z'; v++)
{
_putchar(v);
}

_putchar('\n');
}
}
