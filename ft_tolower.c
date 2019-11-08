/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tolower.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:16:32 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:35:02 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** converts an upper-case letter to the corresponding lower-case letter
*/

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		return (c + 32);
	return (c);
}
