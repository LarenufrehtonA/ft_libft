/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:24:57 by eerdem            #+#    #+#             */
/*   Updated: 2022/02/01 01:36:47 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), 
		void (*del)(void *))
{
	t_list	*return_list;
	t_list	*no;

	return_list = 0;
	while (lst)
	{
		no = ft_lstnew(f(lst->content));
		if (!no)
		{
			ft_lstclear(&return_list, del);
			return (NULL);
		}
		ft_lstadd_back(&return_list, no);
		lst = lst->next;
	}
	return (return_list);
}
/*
#include <stdio.h>
void *f(void *s)
{
	return (s);
}

void del(void *s)
{
	free (s);
}

void iter(void *s)
{
	printf("%s\n", (char *)s);
}

int main (int ac, char const *av[])
{
	t_list *a;
	t_list *b;
	t_list *c;
	a = ft_lstnew("data");
	b = ft_lstnew("data2");
	ft_lstadd_back(&a, b);
	c = ft_lstmap(a, f, del);
	ft_lstiter(c, iter);
	return(0);
}
*/

#include <stdio.h>

void del(void *content)
{
	free(content);
}

void    *f(void *lst)
{
	char *str;
	int i = 0;
	str = malloc(sizeof(char) + 1);
	str = (char *)lst->content;
	printf("%s", (char *)str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		printf("%d-%c\n",i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

void iter(void *s)
{
	printf("%s\n", (char *)s);
}

int main(int ac, char const *av[])
{
	t_list *a;
	t_list *b;
	t_list *c;
	t_list *d;
	a = ft_lstnew("AbC");
	b = ft_lstnew("abcdEF");
	c = ft_lstnew("dsds");
	a->next = b;
	b->next = c;
	d = malloc(sizeof(t_list *));
	d->content = "sElAm";
	c->next = d;
	d = ft_lstmap(a, f, del);
	ft_lstiter(d, iter);
}

