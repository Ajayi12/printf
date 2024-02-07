#include "main.h"
/**
 * print_str - function that print string
 * @format: const char value of the parameter
 * Return: the length of the string
 */
int print_str(va_list args)
{
	int i, len;
	char *str;

	len = 0;
	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}
		write(1, str, len);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	write(1, str, len);
	return (len);
}
