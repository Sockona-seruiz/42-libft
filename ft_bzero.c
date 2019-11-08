/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 13:14:17 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 09:43:22 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** function writes n zeroed bytes to the string s
*/

void	*ft_bzero(void *s, size_t n)
{
	return (ft_memset(s, 0, n));
}
