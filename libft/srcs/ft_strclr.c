/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npetrell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:41:14 by npetrell          #+#    #+#             */
/*   Updated: 2019/09/18 21:16:41 by npetrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_strclr(char *s)
{
	int		i;

	i = 0;
	if (s == 0)
		return ;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
