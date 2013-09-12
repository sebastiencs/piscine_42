/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/23 15:49:41 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/23 15:58:05 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#define	TRUE		1
#define	FALSE		0
#define	SUCCESS		0
#define	EVEN_MSG	"J'ai un nombre pair d'arguments.\n"
#define	ODD_MSG		"J'ai un nombre impair d'arguments.\n"
#define	EVEN(x)		(!((x) % 2))

typedef int t_bool;
