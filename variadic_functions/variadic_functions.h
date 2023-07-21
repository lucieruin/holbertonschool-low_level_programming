#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

/* library */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - print
 * @type: The operator
 * @f: The function associated
 */
typedef struct print
{
	char *type;
	void (*f)(va_list ap);
} print_type;


/* prototypes*/
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);





#endif
