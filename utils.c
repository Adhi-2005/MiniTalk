#include "minitalk.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n *= -1);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}
}

void	ft_putstr(char *s)
{
	write (1, s, ft_strlen(s));
}

int	ft_strlen(char	*str)
{
	int	i;

	while (str[i])
	{
		i++;
	}
	return (i);
}
void	ft_putchar(char	i)
{
	write (1, &i, 1);
}

int	ft_atoi(const char *str)
{
	unsigned long	num;
	long			neg;

	num = 0;
	neg = 1;
	while (*str && (*str == ' ' || (*str >= '\t' && *str <= '\r')))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		num = ((num * 10) + (*str - '0'));
		str++;
	}
	return ((int)(num * neg));
}
