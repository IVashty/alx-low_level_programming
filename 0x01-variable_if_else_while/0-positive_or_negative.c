#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/**
 *main-different return values stored in the variable n
 *should either be either positive or negative or zero
 *every time you will run this program
 *Return : always is 0
 */
int main(void)
{int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
printf("%d is negative\n", n);
return (0);
}
