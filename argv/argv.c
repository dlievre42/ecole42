#include <stdio.h>
#include <unistd.h>

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb / 10 > 0)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar('0' + nb % 10);
}

int main(int argc, char *argv[])
{
	int i;

	for (i=0; i < argc; i++)
	{
		printf("Argument %d : %s \n", i+1, argv[i]);
	}
	
	write(1, "\n", 1);
	ft_putnbr(argc);
	
	return (0);

}


int bmain(int argc, char **argv)
{
	ft_putnbr(argc);
	write(1, "\n", 1);
	ft_putnbr(sizeof (*argv[1]));
	write(1, argv[1], sizeof (argv[1]));
	if (argc == 2) 
	{
		//write(1, "0" + argc, 1};
}
return (0);
}
