#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flag - struct containing flags to "turn on"
 * when a flag spacifier is passed to printf()
 * @plus:flag fot the "+" character
 * @space: flag for the ' ' character
 * @hash: for the "#" character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t

/**
 * struct print Handler -struct to choose the right function depending
 * on the format specifier passed tp printf()
 * @c: format specifier
 * @f:pointer to the correct primary function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph

/* print_nums*/
int print_int
