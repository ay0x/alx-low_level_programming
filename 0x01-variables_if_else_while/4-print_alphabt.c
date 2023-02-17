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
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	if (alpha != 'q' && alpha != 'e')
	{
	putchar(alpha);
	}
}
putchar('\n');
return (0);
}
