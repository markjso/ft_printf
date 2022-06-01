#include "ft_printf.h"
#include <stdio.h>

/* This is a basic tester to test the ft_printf.c function that you have built. To make it
 * run clone it into the directory with the files you have used in your printf function.
 * If you have named your header file something different edit line 1 to match it.
 * Use gcc *.c to run it (if you have files in other folders link them in using libft/*.c etc).
 * The returned values should match the actual printf values if your function is correct.*/

int main(void)
{
	int	len;
	int	len2;
	unsigned int	ui;
	int	i;
	int	u;
	int	*ptri;

	len = ft_printf("a simple sentance\n");
	len2 = printf("a simple sentance\n");
	i = 100;
	ui = 2147483647;
	u = -10;
	ptri = &i;

	puts("This tester shows the results using ft_printf and printf.");
	puts("The results should be the same.");
	ft_printf("S test:%s\n", "This is a string");
	printf("S test:%s\n", "This is a string");
	ft_printf("Empty string:%s\n", "");
	printf("Empty string:%s\n", "");
	ft_printf("C test:%c\n", 'h');
	printf("C test:%c\n", 'h');
	ft_printf("d test (negative value):%d\n", -1234567);
	printf("d test  (negative value):%d\n", -1234567);
	ft_printf("Percent test:%%\n");
	printf("Percent test:%%\n");
	ft_printf("hex test (x X):%x %X\n", ui, ui);
	printf("hex test (x X):%x %X\n", ui, ui);
	ft_printf("U test (Unsigned value of -10):%u\n", u);
	printf("U test (unsigned value of -10):%u\n", u);
	ft_printf("I test (Length of a string):%i\n", len);
	printf("I test (Length of a string):%i\n", len2);
	ft_printf("P test. Value of i:%d\n", i);
	printf("P test. Value of i:%d\n", i);
	ft_printf("P test. Address of i:%p\n",ptri);
	printf("P test. Address of i:%p\n", ptri);
	ft_printf("P test, value of ptri should be same as i:%d\n", *ptri);
	printf("P test, value of ptri should be same as i:%d\n", *ptri);
	return (0);
}
