#include <stdio.h>

/**
 *main - Entry point
 *Write a program that prints all single digit numbers of base 10 (0-9)
 *Return: Always (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}
