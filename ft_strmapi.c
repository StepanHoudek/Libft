/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:37:58 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/16 13:40:42 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	unsigned int	i;
	char			*ptr;

	if (s == 0 || f == 0)
	{
		return (0);
	}
	len = ft_strlen(s);
	i = 0;
	ptr = malloc(sizeof(char) * (len + 1));
	while (s[i] != '\0')
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	return (ptr);
}

/*
char	sample_func(unsigned int i, char c)
{
	return (c + 1);
}


#include <stdio.h>

int	main(void)
{
	char const	*ptr = "abcd";

	printf("%s", ft_strmapi(ptr, &sample_func));
}
*/
