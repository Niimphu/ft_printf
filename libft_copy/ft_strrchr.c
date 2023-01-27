/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:13:21 by yiwong            #+#    #+#             */
/*   Updated: 2022/12/17 21:08:22 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*r;

	i = 0;
	r = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			r = ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		r = ((char *)s + i);
	return (r);
}

// int	main(void)
// {
// 	char *s = "Maybe Christmas, the Grinch thought, doesn't come from a store.";
// 	char *out;
// 	out = ft_strrchr(s, 'm');
// 	printf("%s\n", out);
// 	out = ft_strrchr(s, '\0');
// 	if (out[0] == '\0')
// 		printf("%s\n", "terminator pointer");
// 	out = ft_strrchr(s, 'V');
// 	if (!out)
// 		printf("%s\n", "null");
// }