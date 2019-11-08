/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:48:26 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 09:44:48 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

/*
** allocates enough space for count objects that are size
** bytes, the memory is filled with 0
*/

void	*ft_calloc(size_t count, size_t size)
{
	char			*calloc;
	unsigned int	i;

	i = 0;
	if ((calloc = malloc(count * size)) == 0)
		return (0);
	while (i < (count * size))
	{
		calloc[i] = 0;
		i++;
	}
	return ((void *)calloc);
}
