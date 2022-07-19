#include "main.h"

/**
 * print_chessboard -function that prints the chessboard.
 * @a:string type pointer
 * Return:always 0 = success
 */

void print_chessboard(char (*a)[8])
{
int v;
int j;

j = 0;
while (j < 8)
{
v = 0;
while (v < 8)
{
_putchar(a[j][v]);
v++;
}
_putchar('\n');
j++;
}

}
