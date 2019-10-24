/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 14:57:58 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 10:29:25 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = 0;
	i = 0;
	k = 0;
	while (src[k] != '\0')
		k++;
	while (dst[i] != '\0' && i < size)
		i++;
	if (i >= size)
		return (k + size);
	while (src[j] != '\0' && i + j < size - 1)
	{
		dst[j + i] = src[j];
		j++;
	}
	dst[j + i] = '\0';
	return (k + i);
}
