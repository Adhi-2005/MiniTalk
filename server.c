#include "minitalk.h"

void	signal_handler( int sig)
{
	static int	bits;
	static int	bytes;

	if (sig == SIGUSR1)
		bytes += 1 << (7 - bits);
	if (sig == SIGUSR2)
		bytes += 0 << (7 - bits);
	bits++;
	if (bits == 8)
	{
		ft_putchar(bytes);
		bytes = 0;
		bits = 0;
	}
}

int	main(void)
{
	ft_putstr("PID : ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while (1)
		pause();
}
