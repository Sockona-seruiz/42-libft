/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:40:52 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:37:49 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** Allocate (with malloc (3)) and return a copy of the
** string of characters given in argument, without the
** characters specified in the set given as argument
** at the beginning and at the end of the string
*/

#include <stdlib.h>
#include "libft.h"

/*
** computes the len of the string to copy by
** running through (from the begining or the end
** depending on the variable "sens")
** s1 while it contains only characters included in set
*/

static	int		ft_chkl(char const *s1, char const *set, int start, int sens)
{
	int j;
	int len;
	int btn;

	len = ft_strlen(s1);
	btn = 1;
	j = 0;
	while (btn == 1)
	{
		btn = 0;
		while (set[j] && btn == 0)
		{
			if (s1[start] == set[j])
				btn = 1;
			j++;
		}
		start = start + sens;
		j = 0;
	}
	if (start - sens == len)
		return (-1);
	return (start - sens);
}

/*
** malloc the right size then copy the string to keep
*/

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		i;
	int		len;
	int		start;
	int		end;

	if (!s1)
		return (0);
	if ((start = ft_chkl(s1, set, 0, 1)) == -1)
	{
		if (0 == (dest = (char *)malloc(sizeof(char) * 1)))
			return (0);
		dest[0] = '\0';
		return (dest);
	}
	i = ft_strlen(s1);
	len = i;
	end = i - 1 - (ft_chkl(s1, set, i - 1, (-1)));
	if (0 == (dest = (char *)malloc(sizeof(char) * (len - start - end + 1))))
		return (0);
	i = start - 1;
	while (++i < len - end)
		dest[i - start] = s1[i];
	dest[i - start] = '\0';
	return (dest);
}
