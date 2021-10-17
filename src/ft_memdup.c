/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:47:03 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/09 21:47:06 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void const *src, size_t siz)
{
	void	*out;

	out = malloc(siz);
	if (out == NULL)
		return (NULL);
	return (ft_memcpy(out, src, siz));
}
