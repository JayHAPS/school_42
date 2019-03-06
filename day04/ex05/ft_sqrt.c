/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 22:07:15 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/13 22:07:16 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		sqr;

	sqr = 1;
	while ((sqr * sqr) < nb)
		sqr += 1;
	if ((sqr * sqr) == nb)
		return (sqr);
	return (0);
}
