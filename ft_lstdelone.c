/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:24:22 by eerdem            #+#    #+#             */
/*   Updated: 2022/01/31 15:31:56 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
#include <stdio.h>
void del(void *content)
{
	free(content);
}

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	a = ft_lstnew("a");
	b = ft_lstnew("b");
	c = ft_lstnew("c");
	a->next = b;
	b->next = c;
	ft_lstdelone(a, del);
	printf("%s", a->content);
}
