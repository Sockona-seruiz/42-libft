/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split_ALED.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/21 14:19:30 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:38:26 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** allocates and return a (char **) obtained by spliting s with (char) c
*/

#include "libft.h"

/*
** free each malloced word, then the whole (char **)
*/

static	int		ft_freemalloc(char **dest, int ligne)
{
	while (ligne >= 0)
	{
		free(dest[ligne]);
		ligne--;
	}
	free(dest);
	return (0);
}

/*
** runs through s, then through each word, calculate its len
** mallocates it then fill (char **) dest with each word
** ar[0] & ar[1] are just a i and a j, used to run through s
*/

static	int		ft_filldest(char const *s, char c, char **dest, int *ar)
{
	int ligne;

	ligne = 0;
	while (s[ar[0]])
	{
		if (s[ar[0]] != c)
		{
			while (s[ar[0] + ar[1]] != c && s[ar[0] + ar[1]] != '\0')
				ar[1]++;
			if ((dest[ligne] = (char *)malloc(sizeof(char) * (ar[1] + 1))) == 0)
				return (ft_freemalloc(dest, ligne - 1));
			ar[1] = 0;
			while (s[ar[0] + ar[1]] != c && s[ar[0] + ar[1]] != '\0')
			{
				dest[ligne][ar[1]] = s[ar[0] + ar[1]];
				ar[1]++;
			}
			ar[0] = ar[0] + ar[1];
			dest[ligne++][ar[1]] = '\0';
			ar[1] = 0;
		}
		else
			ar[0]++;
	}
	return (1);
}

/*
** runs through s and count how many word will have to be malloced
*/

static	int		ft_count_line(char const *s, char c)
{
	int	i;
	int	ligne;

	ligne = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			ligne++;
		}
		else
			i++;
	}
	return (ligne);
}

char			**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		ligne;
	int		array[2];

	if (!s)
		return (0);
	array[0] = 0;
	array[1] = 0;
	j = 0;
	i = 0;
	ligne = ft_count_line(s, c);
	if ((dest = (char **)malloc(sizeof(char *) * (ligne + 1))) == 0)
		return (0);
	if ((ft_filldest(s, c, dest, array)) == 0)
		return (0);
	dest[ligne] = 0;
	return (dest);
}
