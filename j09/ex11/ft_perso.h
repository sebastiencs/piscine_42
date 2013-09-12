/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/23 05:04:41 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/23 05:32:02 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#define SAVE_THE_WORLD "warrior"

typedef struct	s_perso
{
	char	*name;
	double	life;
	int		age;
	char	*profession;
}				t_perso;
