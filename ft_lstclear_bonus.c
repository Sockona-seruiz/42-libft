/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 15:08:01 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 16:39:56 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!del || !lst || !(*lst))
		return ;
	if ((*lst)->next != NULL)
	{
		ft_lstclear(&((*lst)->next), del);
		ft_lstdelone(*lst, del);
	}
	else
		free(*lst);
	*lst = 0;
}
