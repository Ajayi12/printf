#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
int _putchar(char c);
int print_str(va_list args);
int print_int(va_list args);
int print_char(va_list args);
int _printf(const char *format, ...);
#endif /* MAIN_H */
