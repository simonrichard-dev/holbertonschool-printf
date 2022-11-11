#include "main.h"

/**
 * print_digit - function that print a digit
 * @dgt: entry point : a digit
 *
 * Return: i the length
 */

int print_digit (va_list dgt)
{
	int len = 0;
	int num = va_arg(dgt, int);
	int div = 1;
	int tmp;
	int res1;
	int i;

	if (num < 0)
	{
		len += _putchar('-');
		num = -num;
	}
	if (num <= 9)
	{
		len += _putchar('0' + num);
	}
	if (num > 9)
	{	
		tmp = num;
		while (tmp > 9)
		{
			res1 = tmp / div;
			tmp = res1;
			div = div * 10;
			i++;
		}
		len += _putchar('0' + tmp);
		while ((num %= div) > 0)
		{
			len +=  _putchar('0' + (num * 10 / div));
			div /= 10;
		}
	}
	return (len);
}
