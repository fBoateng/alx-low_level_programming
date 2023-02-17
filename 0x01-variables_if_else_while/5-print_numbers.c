#include <stdio.h>
/**
 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	/* print numbers from 0-10*/
	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
