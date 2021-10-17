/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 07:06:35 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/04 07:06:49 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*cs;
	size_t	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	cs = malloc(ft_strlen(s) + 1);
	if (cs == NULL)
		return (NULL);
	while (s[i])
	{
		cs[i] = f(s[i]);
		++i;
	}
	cs[i] = '\0';
	return (cs);
}
