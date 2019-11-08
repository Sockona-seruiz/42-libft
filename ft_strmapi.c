/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/10 11:24:35 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:26:01 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** Applies the function f to each character of the
** string passed as an argument to create
** a new string (with malloc (3))
** resulting from the successive applications of f
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (s == 0 || f == 0)
		return (0);
	i = ft_strlen(s);
	if ((result = (char *)malloc(sizeof(char) * (i + 1))) == 0)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
