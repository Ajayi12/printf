#include "main.h"
/**
 * print_int - function that print integr
 * @args: argument to the function
 * Return: Always 0 (success)
 */
int print_int(va_list args)
{
	int count, num, temp, temp2, temp3;
	char ch;

	temp2 = 1;
	count = 0;
	num = va_arg(args, int);
	if (num < 0)
	{
		ch = '-';
		_putchar(ch);
		num = -num;
		count++;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	temp = num;
	while (temp != 0)
	{
		temp = temp / 10;
		count++;
		temp2 *= 10;
	}
	temp = num;
	while (temp2 != 1)
	{
		temp2 = temp2 / 10;
		if (temp2 != 0)
		{
			temp3 = temp / temp2;
			temp = temp % temp2;
		}
		_putchar(temp3 + '0');

	}
	return (count);
	va_end(args);
}
