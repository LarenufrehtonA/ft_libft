/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:24:00 by eerdem            #+#    #+#             */
/*   Updated: 2022/01/31 15:20:14 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	a = ft_lstnew("asd");
	b = ft_lstnew("gfd");
	c = ft_lstnew("123");
	a->next = b;
	b->next = c;
	printf("%s", ft_lstlast(a)->content);
}
*/
