#include "main.h"

/**
 * jack_bauer - function that prints every minute of the
 * day of starting from 00:00 to 23:59.
 * Return: no return
 */

void jack_bauer(void)
{
	int hrB, hrA, minB, minA;

	for (hrB = 48; hrB < 51; hrB++)
	{
		for (hrA = 48; hrA < 52; hrA++)
		{
			for (minB = 48; minB < 54; minB++)
			{
				for (minA = 48; minA < 58; minA++)
				{
					_putchar(hrB);
					_putchar(hrA);
					_putchar(':');
					_putchar(minB);
					_putchar(minA);
					_putchar('\n');
				}
			}
		}
	}
}
