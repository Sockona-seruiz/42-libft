/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 12:47:52 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/24 12:03:26 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_error(t_list **lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		len;
	t_list	*result;
	t_list	*first;
	t_list	*buffer;

	if (!lst)
		return (0);
	len = ft_lstsize(lst);
	if ((result = ft_lstnew(0)) == 0)
		return (0);
	first = result;
	while (lst->next != 0)
	{
		if ((buffer = ft_lstnew(0)) == 0)
		{
			ft_error(&first, del);
			return (0);
		}
		result->content = f(lst->content);
		result->next = buffer;
		result = buffer;
		lst = lst->next;
	}
	result->content = f(lst->content);
	return (first);
}
