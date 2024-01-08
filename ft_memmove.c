/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:57:05 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/08 14:47:42 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n;
		while (i > 0)
		{
			write(1, &((unsigned char *)dest)[i], 1);
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
		write(1, "x", 1);
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buffer[10] = "Hello,";

	char *src = &buffer[0];  // Points to the start of the buffer
	char *dest = &buffer[5]; // Points to a location within the buffer
	printf("Before: %s\n", buffer);
	ft_memmove(dest, src, 6);
	printf("After: %s\n", buffer);
	return (0);
}
*/
