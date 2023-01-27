/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:17:01 by yiwong            #+#    #+#             */
/*   Updated: 2022/12/16 20:24:35 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char c;
// 	c = ft_tolower('f');
// 	printf("%c\n", c);
// 	c = ft_tolower('T');
// 	printf("%c\n", c);
// 	c = ft_tolower('@');
// 	printf("%c\n", c);
// 	c = ft_tolower(3);
// 	printf("%d\n", c);
// }