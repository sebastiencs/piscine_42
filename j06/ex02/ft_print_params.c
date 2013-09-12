/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/20 16:31:35 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/20 16:41:06 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	z;

	i = 1;
	z = 0;
	while (i < argc)
	{
		while (argv[i][z])
		{
			ft_putchar(argv[i][z]);
			z++;
		}
		ft_putchar('\n');
		z = 0;
		i++;
	}
	return (0);
}
