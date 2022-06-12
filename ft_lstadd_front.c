/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:23:37 by eerdem            #+#    #+#             */
/*   Updated: 2022/01/31 17:25:45 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int main()
{
	t_list *a;
	t_list *b;
	a = ft_lstnew("qwe");
	b = ft_lstnew("asd");
	ft_lstadd_front(&a, b);
	printf("%s", a->content);
}
