/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 20:44:14 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/11 15:26:48 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *usize;

	usize = malloc(size);
	if (usize == NULL)
		return (NULL);
	while (size)
		usize[--size] = 0;
	return ((void *)usize);
}
