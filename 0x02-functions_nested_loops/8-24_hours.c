#include "main.h"
/**
 * jack_bauer - Print the 24hr in minutes
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int m = 0;
	int t = 0, w = 0, h = 0, r = 0;

while (m < 24 * 60)
{
r++;
if (r > 9)
{
r = 0;
h++;
}
if (h > 5)
{
h = 0;
w++;
}
if (w > 9)
{
w = 0;
t++;
}
m++;
}
_putchar(t + '0');
_putchar(w + '0');
_putchar(':');
_putchar(h + '0');
_putchar(r + '0');
_putchar('\n');
}
