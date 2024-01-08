/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:40:02 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/08 14:51:56 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*src;
	char	*dest;

	src = malloc(sizeof(char) * 10);
	dest = malloc(sizeof(char) * 10);
	src[0] = 'a';
	dest[0] = 'j';
	dest[1] = 'j';
	dest[2] = '\0';
	ft_memcpy(dest, src, 1);
	printf("%s", dest);
}
*/
