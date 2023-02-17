#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hex[] = "0123456789abcdef";
int num;
for (num = 0; num < 16; num++)
{
putchar(hex[num]);
}
putchar('\n');
return (0);
}
