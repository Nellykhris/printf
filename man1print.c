#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function
 * Return: length of the formatted output string
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguements;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguements, format);
	if(!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
<<<<<<< HEAD
{
	if (*p =='%')
{
	p++;
	if (*p == '%')
{
	count += _putchar('%');
	continue;
}
	while (get_flag(*p, &flags))
	p++;
	pfunc = get_print(*p);
	count += (pfunc)
	? pfunc(arguements, &flags)
	: _printf("%%%c", *p);
}
=======
	{
			if(*p == '%')
			{
				p++;
				if(*p == '%')
				{
				count += _putchar('%');
				continue;
			}
		while (get_flag(*p. &flags))
			p++;
		pfunc = get_print(*p);
		count += (pfunc)
			? pfunc(arguements, &flags)
			: _printf("%%%c", *p);
	}
>>>>>>> f712caaf4ebcc987457f0d21012653f30601500f
	else
		count += _putchar(*p);
}
_putchar(-1);
va_end(arguements);
return (count);
}
