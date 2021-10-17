/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:56:28 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/01 17:57:21 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n)
	{
		((unsigned char*)dst)[idx] = ((unsigned char*)src)[idx];
		if (((unsigned char*)dst)[idx] == (unsigned char)c)
			return ((unsigned char*)(dst + idx + 1));
		++idx;
	}
	return (NULL);
}
