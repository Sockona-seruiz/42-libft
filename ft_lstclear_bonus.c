/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 15:08:01 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 09:59:12 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** runs trough lst apply the del function to each content
** then free each chain link
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*tmp;

	list = *lst;
	tmp = NULL;
	while (list)
	{
		if (list->next)
			tmp = list->next;
		else
			tmp = NULL;
		del(list->content);
		free(list);
		list = tmp;
	}
	*lst = NULL;
}
