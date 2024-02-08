/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_end                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42.cz>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:14:21 by shoudek           #+#    #+#             */
/*   Updated: 2024/02/08 13:16:07 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstadd_end(Node **root, int value)
{
	Node *new_node;
	Node *curr;

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
	curr = *root;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
	return ;
}