#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet x10
 */

void print_alphabet_x10(void)

{

int cha;

int cha2;


for (cha = 0; cha <= 9; cha++)

{

for (cha2 = 'a'; cha2 <= 'z'; cha2++)

{

_putchar(cha2);

}

_putchar(cha);

_putchar('\n');

}

}
