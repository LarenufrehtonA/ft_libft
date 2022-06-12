/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 13:26:42 by eerdem            #+#    #+#             */
/*   Updated: 2022/01/22 00:28:02 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	total;

	total = size * count;
	ret = (void *) malloc (total);
	if (!ret)
		return (NULL);
	ft_bzero(ret, total);
	return (ret);
}

//int main()
//{
//	int *ip, id;
//	ip = (int *) ft_calloc(10, sizeof(int));
//	for (id=0; id<10; id++)	{
//		*(ip+id) = (id + 1) * 5;
//		printf("%p adres degeri : %d\n", (ip+id), *(ip+id));
//	}
//	free(ip);
//}
