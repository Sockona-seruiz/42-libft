/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 10:25:05 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/06 11:44:32 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (!s)
		return (0);
	if (start > len)
	{
		if ((dest = malloc(sizeof(char) * 1)) == 0)
			return (0);
		dest[0] = 0;
		return (dest);
	}
	if (NULL == (dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = start;
	while (s[i] && (i - start) < len)
	{
		dest[i - start] = s[i];
		i++;
	}
	dest[i - start] = '\0';
	return (dest);
}
