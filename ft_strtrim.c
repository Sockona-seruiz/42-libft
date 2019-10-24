/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:40:52 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 14:40:33 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

static	int		ft_len(char const *s1)
{
	int i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

static	int		ft_chkl(char const *s1, char const *set, int start, int sens)
{
	int j;
	int len;
	int btn;

	len = 0;
	while (s1[len])
		len++;
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
	i = ft_len(s1);
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
