/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shoudek <shoudek@student.42prague.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:49:22 by shoudek           #+#    #+#             */
/*   Updated: 2024/01/08 14:47:17 by shoudek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'C';
	printf("%d", ft_isalpha(c));
}
*/
