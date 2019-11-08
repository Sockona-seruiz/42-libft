/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdelone_bonus.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 10:20:02 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:00:41 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** applies the del function to lst->content
** set next to null and free lst
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
		return ;
	del((void *)lst->content);
	lst->next = NULL;
	free(lst);
	lst = NULL;
}
