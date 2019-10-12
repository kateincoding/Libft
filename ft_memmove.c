/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 19:12:57 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/11 16:45:20 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*al_dst;
	unsigned char	*al_src;

	if (!dst && !src)
		return (NULL);
	i = -1;
	al_dst = (unsigned char *)dst;
	al_src = (unsigned char *)src;
	if (al_src < al_dst)
		while (len--)
			al_dst[len] = al_src[len];
	else
		while (++i < len)
			al_dst[i] = al_src[i];
	return (al_dst);
}
