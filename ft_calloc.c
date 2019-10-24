/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 09:48:26 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 12:24:16 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

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
