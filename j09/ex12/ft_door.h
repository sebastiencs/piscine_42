/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/23 06:13:52 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/23 06:59:08 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

typedef int ft_bool;
#define TRUE 1
#define OPEN 1
#define CLOSE 0
#define EXIT_SUCCESS 0
typedef struct	s_door
{
	int	state;
}				t_door;
ft_bool	open_door(t_door *door);
ft_bool	close_door(t_door *door);
ft_bool	is_door_open(t_door *door);
ft_bool	is_door_close(t_door *door);
