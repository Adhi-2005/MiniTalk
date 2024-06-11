#include "minitalk.h"

void	send_msg(int pid, char msg)
{
	static int	i;

	i = 7;
	while (i >= 0)
	{
		if (msg >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(300);
		i--;
	}
}

int	condition_check(int pid, char *av)
{
	if (pid <= 0)
	{
		ft_putstr("PID not working");
		return (0);
	}
	if (ft_isalpha(*av))
	{
		ft_putstr("Invalid Input !");
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int		i;
	int		pid;

	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		if (condition_check(pid, av[1]) == 0)
			return (0);
		while (av[2][i])
		{
			send_msg(pid, av[2][i]);
			i++;
		}
	}
	else
	{
		ft_putstr("Give 3 Arguments\n");
		ft_putstr("Format : ./client <space> PID <space> message\n");
	}
}