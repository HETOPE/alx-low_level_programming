#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @plc: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int plc)
{
	int pld;

	pld = (plc % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
