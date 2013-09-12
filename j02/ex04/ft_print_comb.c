/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/14 14:43:44 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/15 10:55:45 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int	numbers[3] = {48, 48, 48};

	while (numbers[0] <= 57)
	{
		if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
		{
			ft_putchar(numbers[0]);
			ft_putchar(numbers[1]);
			ft_putchar(numbers[2]);
			if (numbers[0] != 55)
				ft_putchar(',');
			if (numbers[0] != 55)
				ft_putchar(' ');
		}
		if (numbers[2]++ >= 57)
		{
			numbers[2] = 48;
			numbers[1]++;
		}
		if (numbers[1] == 58)
		{
			numbers[1] = 48;
			numbers[0]++;
		}
	}
}
