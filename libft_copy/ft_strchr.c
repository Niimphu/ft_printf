/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:18:24 by yiwong            #+#    #+#             */
/*   Updated: 2022/12/17 21:07:52 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

// int	main(void)
// {
// 	char *s = "Maybe Christmas, the Grinch thought, doesn't come from a store.";
// 	char *out;
// 	out = ft_strchr(s, 'm');
// 	printf("%s\n", out);
// 	out = ft_strchr(s, '\0');
// 	if (out[0] == '\0')
// 		printf("%s\n", "terminator pointer");
// 	out = ft_strchr(s, 'V');
// 	if (!out)
// 		printf("%s\n", "null");
// }