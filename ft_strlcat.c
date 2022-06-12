/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:31:47 by eerdem            #+#    #+#             */
/*   Updated: 2022/02/01 16:16:04 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	size_t		dest_lenght;
	size_t		src_lenght;

	src_lenght = ft_strlen(src);
	dest_lenght = ft_strlen(dst);
	j = dest_lenght;
	i = 0;
	if (dest_lenght < size - 1 && size > 0)
	{
		while (src[i] && dest_lenght + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}	
			dst[j] = 0;
	}
	if (dest_lenght >= size)
		dest_lenght = size;
	return (dest_lenght + src_lenght);
}
#include <stdio.h>

int main()
{
	char src[10] = "aaaaaa";
	char dst[10] = "123456";
	printf("%zu", ft_strlcat(dst, src, '2'));
}
