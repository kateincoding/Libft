/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:54:13 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/01 14:55:33 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	idx;

	idx = 0;
	if (!src && !dst)
		return (NULL);
	while (idx < n)
	{
		((unsigned char*)dst)[idx] = ((unsigned char*)src)[idx];
		++idx;
	}
	return (dst);
}
