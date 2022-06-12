/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:23:17 by eerdem            #+#    #+#             */
/*   Updated: 2022/01/31 19:30:53 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *veri)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (!(new_elem))
		return (NULL);
	new_elem->content = veri;
	new_elem->next = NULL;
	return (new_elem);
}
/*
#include <stdio.h>

int main()
{
	t_list *a;
	a = ft_lstnew("of");
	printf("%s", a->content);
}
*/
