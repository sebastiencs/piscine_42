/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/23 02:19:16 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/23 03:15:51 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_alert(void)
{
	write(1, "Alert !!!\n", 10);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	find_alert(char *str)
{
	if (ft_strcmp(str, "president") == 0)
		write_alert();
	if (ft_strcmp(str, "attentat") == 0)
		write_alert();
	if (ft_strcmp(str, "bauer") == 0)
		write_alert();
}

void	to_minuscule(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	temp[1000];
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				temp[k] = argv[i][j];
				k++;
			}
			j++;
		}
		temp[j] = '\0';
		to_minuscule(temp);
		find_alert(temp);
		i++;
	}
	return (0);
}
