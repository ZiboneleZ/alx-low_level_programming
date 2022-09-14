#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void)

{

int char1 = 0;

char char2;

while (char1 < 10)

{

char2 = 'a';

while (char2 <= 'z')

{

_putchar(char2);

char2++;

}

_putchar('\n');

char1++;

}
}
