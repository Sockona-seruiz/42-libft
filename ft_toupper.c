/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_toupper.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:16:32 by seruiz       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/08 10:35:45 by seruiz      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
** converts a lower-case letter to the corresponding upper-case letter
*/

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	return (c);
}
