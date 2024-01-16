/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:57:05 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/16 10:20:25 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (((size_t)dest - (size_t)src) < n)
	{
		i = n - 1;
		while (i >= 0)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while ((size_t)i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	char	src2[] = "lorem ipsum dolor sit amet";
	char	*dest2;

	// dest = "orem ipsum dolor sit amet";
	dest = src + 1;
	printf("Before: %s\n", dest);
	ft_memmove(dest, src, 8);
	printf("After: %s\n", dest);
	// dest = "orem ipsum dolor sit amet";
	dest2 = src2 + 1;
	printf("Before: %s\n", dest2);
	ft_memmove(dest2, src2, 8);
	printf("After: %s\n", dest2);
	return (0);
}

*/
