/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:21:41 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/03 17:21:41 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int	setlen;
	int	s1len;
	int	i;
	
	if (!s1 || !set)
		return (0);
	setlen = ft_strlen(set);
	s1len = ft_strlen(s1);
	i = 0;
	while (i < setlen)
	{
		
	}
}
