/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/29 21:49:28 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/30 17:20:57 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, voidd (*applyf)(void *))
{
	if (!root)
	{
		if (root->left)
			btree_apply_infix(root->left, applyf);
		(*applyf)(root->item);
		if (root->right)
			btree_apply_infix(root->right, applyf);
	}
}
