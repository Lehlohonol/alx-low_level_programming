#include <stdio.h>
/**
 *main - Combination of single-digit num
 *Description: Printing the numbers
 *From 0
 *Return: 0
 */
int main(void)
{
int c = 0;

while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
