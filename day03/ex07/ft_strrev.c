/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 23:00:48 by jaleman           #+#    #+#             */
/*   Updated: 2016/08/12 23:23:59 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[i])
		i += 1;
	while ((i - 1) > j)
	{
		tmp = str[i];
		str[i--] = str[j];
		str[j++] = tmp;
	}
	return (str);
}
