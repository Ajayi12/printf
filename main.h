#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
int print_str(va_list args);
int print_char(va_list args);
int _printf(const char *format, ...);
#endif /* MAIN_H */
