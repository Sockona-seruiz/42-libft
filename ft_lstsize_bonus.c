/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstsize_bonus.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 15:21:55 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:07:05 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** return the number of list in the chain
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int i;

	i = 0;
	while (lst != 0)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
