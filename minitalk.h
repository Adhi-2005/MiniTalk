#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <signal.h>

void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putchar(char	i);
int		ft_atoi(const char *str);
int		ft_strlen(char	*str);
int		ft_isalpha(int i);

#endif