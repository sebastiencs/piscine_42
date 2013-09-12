/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/29 18:43:10 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/30 17:19:50 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __FT_BTREE_H__
# define __FT_BTREE_H__

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;

#endif
