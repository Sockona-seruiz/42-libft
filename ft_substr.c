/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 10:25:05 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 10:45:22 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if ((!s ||
		NULL == (dest = (char *)malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	while (s[i])
		i++;
	if (start > i)
	{
		dest[0] = '\0';
		return (dest);
	}
	i = start;
	while (s[i] && (i - start) < len)
	{
		dest[i - start] = s[i];
		i++;
	}
	dest[i - start] = '\0';
	return (dest);
}
