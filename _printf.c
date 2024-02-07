#include "main.h"
/** _printf - function that behave like printf
 * @format: argument to the parameter
 * Return: Always 0 (success)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count, i;
	char ch;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format++;
			switch(format[i])
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
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	return (count);
	va_end(args);
}
