#include "main.h"

/**
 * _isalpha - Check if character is an alphabetic character.
 * @char1: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */

int _isalpha(int char1)

{

if ((char1 > 64 && char1 < 91) || (char1 > 96 && char1 < 123))

return (1);

else

return (0);

}
