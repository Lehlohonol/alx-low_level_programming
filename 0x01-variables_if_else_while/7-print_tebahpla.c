#include <stdio.h>
/**
 *main - Where we start
 *
 *Description: printing low case char
 *Return: 0 for now
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; --c)
putchar(c);

putchar('\n');

return (0);
}
