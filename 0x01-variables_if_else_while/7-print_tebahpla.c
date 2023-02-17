#include <stdio.h>
/**
 * main - prints lower case alphabets in reverse
 *
 * Return: 0, if succesful
 */
int main(void)
{
	char rvs;
	/*
	 * loops through the alphabets from behind
	 * to print alphabets in reverse
	 */
	for (rvs = 'z' ; rvs >= 'a'; rvs--)
	{
		putchar(rvs);
	}
	putchar('\n');
	return (0);
}
