#include "main.h"
/**
 * *_isalpha -> checks if the character is/are alphabets
 * @c: a character argument
 * ** Return: returns 1 and 0 depending on condition
 */
int _isalpha(int c)
{
if  ((c > 96 && c < 123) || (c > 64 && c < 91))
return (1);
else
return (0);
}
