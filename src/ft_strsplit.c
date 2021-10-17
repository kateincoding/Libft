/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksoto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 02:03:04 by ksoto             #+#    #+#             */
/*   Updated: 2019/10/11 16:50:44 by ksoto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**arr;

	i = 0;
	j = 0;
	k = 0;
	if (!s || !c)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_wrdcount(s, c)) + 1);
	if (arr == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (i != j)
			arr[k++] = ft_strndup(s + j, i - j);
	}
	arr[k] = NULL;
	return (arr);
}
