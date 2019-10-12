/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 07:17:37 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/04 07:17:50 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		cs[i] = f(i, s[i]);
		++i;
	}
	cs[i] = '\0';
	return (cs);
}
