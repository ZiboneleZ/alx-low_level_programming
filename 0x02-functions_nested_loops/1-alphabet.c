#include "main.h"

 /**
  * print_alphabet - entry point
  *Description: The fuction prints the alphabets in lowercase
  *
  *Return: Always 0 (success)
  */

void print_alphabet(void)

{
char alphabet = 0;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{

_putchar(alphabet);

}

_putchar('\n');

}
