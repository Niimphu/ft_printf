/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:32:23 by yiwong            #+#    #+#             */
/*   Updated: 2022/12/17 22:24:26 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little || !*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len
			&& big[i + j] && little[j])
			j++;
		if (little[j] == '\0')
			return (&((char *)big)[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *h = "eggs bacon lettuce tomatoes cucumber";
// 	printf("%s\n", ft_strnstr(h, "bacon", 40));
// 	printf("%s\n", ft_strnstr(h, "", 40));
// 	printf("%s\n", ft_strnstr(h, "bacon", 6));
// 	printf("%s\n", ft_strnstr(h, "cheese", 40));
// }