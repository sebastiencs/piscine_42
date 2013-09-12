/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/15 15:14:38 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/15 17:27:15 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrev(char *str)
{
	int		counter;
	int		size_str;
	char	temp;

	counter = 0;
	size_str = 0;
	while (str[size_str])
		size_str++;
	size_str -= 1;
	while (counter < size_str)
	{
		temp = str[size_str];
		str[size_str] = str[counter];
		str[counter] = temp;
		counter++;
		size_str--;
	}
	return (str);
}
