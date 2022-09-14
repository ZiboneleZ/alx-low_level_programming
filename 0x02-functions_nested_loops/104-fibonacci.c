#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */

int main(void)
{
unsigned long int num1 = 0, number1 = 1, num2 = 0, number2 = 2;
unsigned long int n1, n2, n3;
int count;
printf("%lu, %lu, ", number1, number2);
for (count = 2; count < 98; count++)
{
if (number1 + number2 > LARGEST || num2 > 0 || num1 > 0)
{
n1 = (number1 + number2) / LARGEST;
n2 = (number1 + number2) % LARGEST;
n3 = num1 + num2 + n1;
num1 = num2, num2 = n3;
number1 = number2, number2 = n2;
printf("%lu%010lu", num2, number2);
}
else
{
n2 = number1 + number2;
number1 = number2, number2 = n2;
printf("%lu", number2);
}
if (count != 97)
printf(", ");
}
printf("\n");
return (0);
}
