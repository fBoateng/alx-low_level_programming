#include <stdio.h>
/**
 * main - is entry of program
 *
 * Return: 0, if succesful
 */
int main(void)
{
	/*
	 * prints all single integers, with comma and space after
	 * loops through 0-9, prints them,prints comma,print space,
	 * use only putchar
	 */
	int a;

	for (a = 0 ; a < 10 ; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
		/*continue printing comma and space except if a == 9*/
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
