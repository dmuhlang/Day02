#include <unistd.h>

void ft_putchar(int d)
{
	write(1, &d, 1);
}

void ft_print_numbers(void)
{
	char number;

	number = '0';
	while(number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}
	int main()
{
			ft_print_numbers();

	return 0;
}



