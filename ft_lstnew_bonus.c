/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 10:35:34 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:05:59 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
**	create a new list link filled with (void *)content
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	if ((result = malloc(sizeof(t_list *))) == 0)
		return (0);
	result->content = content;
	result->next = 0;
	return (result);
}
