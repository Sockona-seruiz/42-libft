/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 12:47:52 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:04:14 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** create a new list in wich every content is the result
** of the old list content, passed trough f
** returns a pointer to the first element of the new list
*/

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		len;
	t_list	*result;
	t_list	*first;
	t_list	*buffer;

	if (!lst)
		return (0);
	len = ft_lstsize(lst);
	if ((result = ft_lstnew(0)) == 0 || f == 0)
		return (0);
	first = result;
	while (lst->next != 0)
	{
		if ((buffer = ft_lstnew(0)) == 0)
		{
			ft_lstclear(&first, del);
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
