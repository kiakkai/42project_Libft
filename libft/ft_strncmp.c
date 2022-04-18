/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 22:20:38 by kaizhang          #+#    #+#             */
/*   Updated: 2022/03/22 21:19:32 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > 0
		&& ((unsigned char)s2[i] != '\0' || (unsigned char)s1[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else
			n--;
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*a = "a";
	char	*b = "bebghjjgfh";
	unsigned int	n;

	n = 5;
	printf("a - b is : %d\n", ft_strncmp(a, b, n));
	printf("\na - b is : %d\n", strncmp(a, b, n));
	return (0);
}
*/
