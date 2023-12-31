#include "main.h"
/**
 * _printf - print to stout formatted text
 *
 * @format: format specifier
 * Return: no of bytes printed
 */
int _printf(const char *format, ...);
{
	unsigned int i, count = 0;
	va_list args;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putss(va_arg(args, int));
			i++;
		}
		else if (format [i + 1] == 's')
		{
			s_count = putss(va_args(args, *char))
			i++;
			count += (s_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
		}
		count += 1;
	}
	va_ends(args);

	return (count)
}
