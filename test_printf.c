#include "printf.h"
#include <stdio.h>

int main(void)
{
	int	len;
	int	len2;
	unsigned int	ui;
	int	i;
	int	u;

	len = ft_printf("a simple sentance\n");
	len2 = printf("a simple sentance\n");
	i = 100;
	ui = 2147483647;
	u = -10;

	ft_printf("String:%s\n", "This is a string");
	printf("String:%s\n", "This is a string");
	ft_printf("Empty string:%s\n", "");
	printf("Empty string:%s\n", "");
	ft_printf("Character:%c\n", 'h');
	printf("Character:%c\n", 'h');
	ft_printf("Negative:%d\n", -1234567);
	printf("Negative:%d\n", -1234567);
	ft_printf("Percent:%%\n");
	printf("Percent:%%\n");
	ft_printf("hex:%x %X\n", ui, ui);
	printf("hex:%x %X\n", ui, ui);
	ft_printf("Unsigned:%u\n", u);
	printf("Unsigned:%u\n", u);
	ft_printf("Length:%d %i\n", len, len);
	printf("Length:%d %i\n", len2, len2);
	ft_printf("Value of i:%d\n", i);
	printf("Value of i:%d\n", i);
	ft_printf("Hex value of i:%p\n", i);
	printf("Hex valuer of i:%p\n", i);
	ft_printf("Pointer address of i:%p\n", (void*)&i);
	printf("Pointer address of i:%p\n", (void*)&i);
	return (0);
}
