/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:24:13 by eerdem            #+#    #+#             */
/*   Updated: 2022/01/31 15:23:45 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	a = *lst;
	while (a->next != NULL)
		a = a->next;
	a->next = new;
}
/*
#include <stdio.h>

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	a = ft_lstnew("a");
	b = ft_lstnew("b");
	c = ft_lstnew("c");
	a->next = b;
	ft_lstadd_back(&a, c);
	printf("%s", a->next->next->content);
}
*/
