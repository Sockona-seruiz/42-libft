/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 11:11:02 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 13:05:08 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;
	int		len;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	len = i;
	while (s2[j])
		j++;
	len = len + j;
	i = -1;
	j = -1;
	if (NULL == (dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s1[++i])
		dest[i] = s1[i];
	while (s2[++j])
		dest[i + j] = s2[j];
	dest[i + j] = '\0';
	return (dest);
}
