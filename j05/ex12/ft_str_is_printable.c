/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/19 15:29:44 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/20 18:43:27 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	iss_printable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(iss_printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}
