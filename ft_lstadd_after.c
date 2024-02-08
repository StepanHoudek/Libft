/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_after.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42.cz>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:17:32 by shoudek           #+#    #+#             */
/*   Updated: 2024/02/08 13:17:44 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstadd_after(Node *node, int value)
{
	Node *new_node;

	new_node = malloc(sizeof(Node));
	if (!new_node)
		return ;
	new_node->x = value;
	new_node->next = NULL;
	if (node == NULL)
	{
		node = new_node;	
		return ;
	}
	new_node->next = node->next;
	node->next = new_node;
	return ;
}