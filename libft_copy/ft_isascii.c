/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:49:41 by yiwong            #+#    #+#             */
/*   Updated: 2022/12/13 19:13:19 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	n;
// 	n = ft_isascii('b');
// 	printf("%d\n", n);
// 	n = ft_isascii(3);
// 	printf("%d\n", n);
// 	n = ft_isascii('\e');
// 	printf("%d\n", n);
// 	n = ft_isascii(0x82);
// 	printf("%d\n", n);
// }