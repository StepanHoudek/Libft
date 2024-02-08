/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42.cz>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:17:00 by shoudek           #+#    #+#             */
/*   Updated: 2024/02/08 13:17:14 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstadd_start(Node **root, int value)
{
	Node *new_node;
	Node *temp;

	new_node = malloc(sizeof(Node));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->next = NULL;
	if (*root == NULL)
	{
		*root = new_node;	
		return ;
	}
	new_node->next = *root;
	*root = new_node;
	return ;
}