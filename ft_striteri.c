/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerdem <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:47:37 by eerdem            #+#    #+#             */
/*   Updated: 2022/02/01 04:58:41 by eerdem           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}	
}

void  *f(unsigned int i, char *c)
{  
    *c = *c + 1;
}
int main ()
{
  char str[] = "eMrE eRdEm";
  ft_striteri(str, *f);
  printf("%s",str);
  return (0);
}
