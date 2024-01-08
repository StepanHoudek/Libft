/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:33:22 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/08 14:48:54 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ABCC";
	s2 = "ABBSA";
	printf("difference %d\n", ft_strncmp(s1, s2, 3));
	printf("Difference: %d\n", strncmp(s1, s2, 3));
}
*/
