/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acorbeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 15:59:35 by acorbeau          #+#    #+#             */
/*   Updated: 2017/04/18 13:03:24 by acorbeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	char	*sptr;

	if (!s || !f)
		return ;
	sptr = s;
	while (*sptr)
	{
		f(sptr);
		sptr++;
	}
}
