/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstclear_bonus.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/14 15:08:01 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/29 09:12:26 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

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
