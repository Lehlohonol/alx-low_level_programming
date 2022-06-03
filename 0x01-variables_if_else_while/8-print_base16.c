#include <stdio.h>
/**
 *main - Magic happens here
 *
 *Description: Base 16 number and in lowercase
 *Return: 0
 */
int main(void)
{
char x;

for (x = '0'; x <= '9'; ++x)
putchar(x);
for (x = 'a'; x <= 'f'; ++x)
putchar(x);

putchar('\n');

return (0);
}
