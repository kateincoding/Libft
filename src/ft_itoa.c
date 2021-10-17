/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 03:25:24 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/11 15:19:29 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	size_t	cnt;
	char	*nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	cnt = ft_count(n);
	nb = ft_strnew(cnt);
	if (nb == NULL)
		return (NULL);
	if (n < 0)
	{
		nb[0] = '-';
		n = -n;
	}
	nb[--cnt] = n % 10 + '0';
	while (n /= 10)
		nb[--cnt] = n % 10 + '0';
	return (nb);
}
