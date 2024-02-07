#include "main.h"
/**
 * length - function that return the length of a string
 * @str: pointer to the char value of the parameter
 * Return: Always 0 (success)
 */
int length(char *str)
{
	int len, i;

	len = 0;
	for (i= 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
