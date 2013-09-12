/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/19 21:29:49 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/20 19:14:42 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
	{
		if (dest_size < size - 1)
			dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size - 1] = '\0';
	return (dest_size);
}
