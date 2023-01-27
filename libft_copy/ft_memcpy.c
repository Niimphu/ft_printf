/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwong <yiwong@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 03:08:08 by yiwong            #+#    #+#             */
/*   Updated: 2022/12/20 03:08:08 by yiwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (!dest)
		return (NULL);
	if (dest == src || !src || n == 0)
		return (dest);
	d = (char *)dest;
	s = (char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

// int main(void)
// {
// 	char *dest = malloc(sizeof(char)*(7 + 1));
// 	char *src = "Source";

// 	dest[7] = '\0';
// 	ft_memcpy(dest, src, 3);
// 	printf("%s\n", dest);
// 	free(dest);
// }