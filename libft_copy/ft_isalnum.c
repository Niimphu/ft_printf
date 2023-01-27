/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:55:09 by yiwong            #+#    #+#             */
/*   Updated: 2022/12/16 19:07:57 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int main(void)
// {
// 		int n;
// 		n = ft_isalnum(2);
// 		printf("%d\n", n);
// 		n = ft_isalnum('b');
// 		printf("%d\n", n);
// 		n = ft_isalnum('2');
// 		printf("%d\n", n);
// 		n = ft_isalnum('@');
// 		printf("%d\n", n);
// }