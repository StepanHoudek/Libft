/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:55:46 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/08 14:49:17 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s);
	while (j > 0)
	{
		if (s[j] == c)
			return ((char *)&s[j]);
		j--;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strrchr("ahojssj", 'j'));
}
*/
