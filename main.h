#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/*FLAGS*/
#define F_MINUS 1

int _printf(const char *format, ...);
int handle_print(const char *fmt, int *i,
	va_list list, char buffer[], int flags, int width, int precision, int size);

/**
 * Funtions to print chars and strings
 */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);
/**
 * Function to handle other specifiers
 */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
/**
 * width handler
 */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
#endif
