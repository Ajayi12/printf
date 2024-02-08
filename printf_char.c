#include "main.h"
/**
 * print_char - function that print character value
 * @args: argument to the function
 * Return: Always 0 (success)
 *
 */
int print_char(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	write(1, &c, 1);
	return (1);
}
