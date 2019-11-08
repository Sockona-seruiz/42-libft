/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd_back_bonus.c                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/11 15:29:23 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 09:56:38 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** run trough alst, then add the new list at the end
*/

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *buffer;

	if (!alst)
		return ;
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	buffer = *alst;
	while (buffer->next != 0)
		buffer = buffer->next;
	buffer->next = new;
}
