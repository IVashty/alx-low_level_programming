#include <stdio.h>
#include <math.h>

/**
 * main -function that prints the largest prime
 * *factor of the number 612852475143
 * Description: u are allowed to use standard library
 * Return: 0 as success
 *
 */


int main(void)
{
int v;
long f = 612852475143;
long ans;
long ans2;

while (f % 2 == 0)
{
ans = 2;
v /= 2;
}
for (ans2 = 3; ans2 <= sqrt(v); ans2 = ans2 + 2)
{
while (v % ans2 == 0)
{
ans = ans2;
v = v / ans2;
}
}
if (v > 2)
ans = v;

printf("%ld\n", ans);

return (0);
}
