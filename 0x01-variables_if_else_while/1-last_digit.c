#include <stdlib.h>
#include <time.h>
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
	int n;
	int last_digit;
	char myChar[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
	printf("%s %d is %d and is greater than 5\n", myChar, n, last_digit);
	}
	else if (last_digit == 0)
	{
	printf("%s %d is 0 and is 0\n", myChar, n);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
	printf("%s %d is %d and is less than 6 and not 0\n", myChar, n, last_digit);
	}
	return (0);

}
