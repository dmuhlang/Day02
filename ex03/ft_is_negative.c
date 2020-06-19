#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative()
{
	int n;
	n=0;
	while(n >= -2147483648 && n <=  2147483647)
	{	
	if (n <0)
		ft_putchar('N');
	else if (n == 0 || n == '\0' || n > 0)
		ft_putchar('P');
	}
}
		
	int main()
{
	int i;
	i=5;
		 ft_is_negative();
			return 0;
}	
		

