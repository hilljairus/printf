#include "holberton.h"
/**
 * print_character - prints character
 * @arg: va_list parameter
 * Description: print character
 * Return: 1
 */
int print_character(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	_putchar(i);

	return (1);
}

/**
 * print_string - print string
 * @arg: va_list parameter
 * Description: print string
 * Return: num of characters
 */
int print_string(va_list arg)
{
	char *s;
	int cont = 0;

	s = va_arg(arg, char *);
	if (!s)
	{
		s = "(null)";
		_puts(s);

		return (_strlen(s));
	}
	_puts(s);
	cont = _strlen(s);
	return (cont);
}

