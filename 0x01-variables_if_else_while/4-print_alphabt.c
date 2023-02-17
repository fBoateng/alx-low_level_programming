#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabets in lower case,eclude e & q
 *
 * Return: O, if succesful
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
