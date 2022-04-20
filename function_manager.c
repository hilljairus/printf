#include "main.h"
#include <stdarg.h>

/**
 *_switch - switch
 *@c: character to find
 *@arg: va_list type
 *Description: This function evaluate cases
 *Return: count of printed characters
 */
int _switch(char c, va_list arg)
{
	int cont = 0;

	switch (c)
	{
		case 'b':
			cont += print_unsign(arg, 2);
			break;
		case 'c':
			cont += print_character(arg);
			break;
		case 'd':
		case 'i':
			cont += print_sign(arg, 10);
			break;
		case 's':
			cont += print_string(arg);
			break;
		
		default:
			cont = -1;
	}
	return (cont);
}
