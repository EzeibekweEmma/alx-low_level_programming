#include <stdio.h>

/**
 *main - Entry ponit
 *Write a program that prints the lowercase alphabet in reverse
 *Return: Always 0 (Seccess)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);
}
