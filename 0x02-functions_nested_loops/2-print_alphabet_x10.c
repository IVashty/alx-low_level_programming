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

for (v = 'a'; v <= 'z'; v++)
{
_putchar(v < 10);
}

_putchar('\n');
}
