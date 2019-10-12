/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 03:12:20 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/11 16:55:09 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	int		f;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	j = i;
	f = 0;
	while (s[j])
	{
		j++;
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			f = 1;
	}
	--j;
	while (j > 0 && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		--j;
	return (f ? ft_strndup(s + i, j - i + 1) : ft_strdup(""));
}
