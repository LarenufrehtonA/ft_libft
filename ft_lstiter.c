/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:24:47 by eerdem            #+#    #+#             */
/*   Updated: 2022/02/01 00:53:41 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void    f(void *lst)
{
    char        *content;
    int i = 0;
    content = (char *)lst;
    while (content[i])
    {
        content[i] = 'x';
        i++;
    }
}

int main()
{
	t_list *a;
	a = ft_lstnew(ft_strdup("of"));
	printf("%s", a->content);
	ft_lstiter(a, f);
	printf("%s", a->content);
}
*/
