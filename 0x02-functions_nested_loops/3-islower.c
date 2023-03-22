#include <stdio.h>
#include <ctype.h>

/* betty style doc for function main goes there */
/**
 * _islower function checks if the letter is uppercase or lowercase
 * if the letter is lowercase -> reutrns 1
 * if the letter is uppercase -> reutrns 0
 * 
 */
int _islower(int c)
{

if (c >= 97 && c <= 122)
{
return (1);
}

return (0);

}
