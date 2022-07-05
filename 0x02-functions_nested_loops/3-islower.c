#include "main.h"
/**
 * *_islower -> checks if the character is lowercase
 * @c: a charcter argument
 * ** Return: returns 1 and 0 depending on condition
 */
int _islower(int c)
{
if  (c >= 96 && c <= 123)
return (1);
else
return (0);
}
