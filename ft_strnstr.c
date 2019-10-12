/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 03:59:09 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/04 03:59:57 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)&h[i]);
	while (h[i] && i < len)
	{
		j = 0;
		while (n[j] && (n[j] == h[j + i]) && (i + j) < len)
			j++;
		if (n[j] == '\0')
			return ((char *)&h[i]);
		i++;
	}
	return (NULL);
}
