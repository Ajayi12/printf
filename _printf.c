#include "main.h"
/**
 * _printf - function that behave like printf
 * @format: argument to the parameter
 * Return: Always 0 (success)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count, i;
	char ch, str;

	count = 0;
	va_start(args, format);
	if (args == NULL)
	{
		return (NULL);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format++;
			switch (format[i])
			{
				case 's':
					count = count + print_str(args);
					break;
				case 'c':
					count = count + print_char(args);
					break;
				case '%':
					ch = '%';
					write(1, &ch, 1);
					count = count + 1;
					break;
				case 'd':
				case 'i':
					count = count + print_int(args);
					break;
				default:
					str = '%';
					write(1, &str, 1);
					write(1, &format[i], 1);
					count = count + 2;
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
	va_end(args);
}
