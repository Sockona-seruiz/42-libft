/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:46:27 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:28:08 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** locates the last occurrence of c in the string s
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*adr;

	i = 0;
	adr = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			adr = (char *)s + i;
		i++;
	}
	if (adr != 0)
		return (adr);
	if (c == '\0')
		return ((char *)s + i);
	return (0);
}
