/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:58:58 by yiwong            #+#    #+#             */
/*   Updated: 2022/12/16 20:21:38 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int	main(void)
// {
// 	char c;
// 	c = ft_toupper('f');
// 	printf("%c\n", c);
// 	c = ft_toupper('T');
// 	printf("%c\n", c);
// 	c = ft_toupper('@');
// 	printf("%c\n", c);
// 	c = ft_toupper(3);
// 	printf("%d\n", c);
// }