#include "main.h"
/** _printf - function that behave like printf
 * @format: argument to the parameter
 * Return: Always 0 (success)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			count = count + print_str(arg);
		}
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			count = count + print_char(args);
		}
	}
	else
	{
		write(
	}
	va_end(args);
}
