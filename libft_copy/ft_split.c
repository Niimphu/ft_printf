/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:32:04 by yiwong            #+#    #+#             */
/*   Updated: 2023/01/16 17:49:07 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_splen(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

int	ft_split_count(char *s, char c)
{
	int	i;
	int	scount;

	i = 0;
	scount = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i ++;
		}
		else
		{
			while (s[i] != c && s[i])
				i ++;
			scount ++;
		}
	}
	return (scount);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	char	*str;
	int		scount;
	int		i;
	int		count;

	str = (char *)s;
	scount = ft_split_count(str, c);
	r = (char **)malloc(sizeof(char *) * (scount + 1));
	if (!r)
		return (NULL);
	i = 0;
	count = 0;
	while (count < scount)
	{
		if (str[i] != c)
		{
			r[count] = ft_substr(str, i, ft_splen(str + i, c));
			i += ft_splen(str + i, c);
			count++;
		}
		i++;
	}
	r[scount] = NULL;
	return (r);
}

// char	**ft_split_r(char **r, char *str, char c, int count)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i] && count <= scount)
// 	{
// 		if (str[i] != c)
// 		{
// 			r[count] = ft_substr(str, i, ft_splen(str + i, c));
// 			i += ft_splen(str + i, c);
// 			count++;
// 		}
// 		i++;
// 	}
// }