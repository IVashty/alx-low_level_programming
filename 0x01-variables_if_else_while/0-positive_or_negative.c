#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/**
 *main-main block of code
 *variable n is to be checked
 *Description-get a random number and assigning to variable n
 *print out either positive or negative or zero
 *Return:0(success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
