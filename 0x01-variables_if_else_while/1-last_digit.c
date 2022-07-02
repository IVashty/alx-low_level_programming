#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/**
 *  *main-main block of code
 *   *variable n is to be checked
 *    *Description-get a random number and assigning to variable n
 *     *print out the last digit
 *      *Return:0(success)
 */

int main(void)
{
int n;
int v;
srand(time(0));
n = rand() - RAND_MAX / 2;
v = n % 10;
if (n > 5)
printf("Last digit of %d is %d is greater than 5\n", n, v);
else if (n != 0 && n < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, v);
else
printf("Last digit of %d is %d and is zero\n", n, v);
return (0);
}
