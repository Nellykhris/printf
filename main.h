#ifndef _MAIN_H_
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>


/**
 * struct flags - struct containing flags that will turn on
 * @cee: flag for the 'c' character
 * @es: flag for the 's' character
 * @percent: flag for the '%' character
 */

typedef struct flags
{
	int cee;
	int es;
	int percent;
} flags_t;

/**
 * struct printHandler - struct to choose the right function
 * @c: format specifier passed to _print()
 * @f: point to the correct print function
 */

typedef struct printHandler
{
	char c;
	int(*f)(va_list ap, flags_t *f);
} ph;

int print_int(va_list 1, flags_t *f);
int print_number(int n);
int print_unsigned(va_list 1, flags_t *f);
