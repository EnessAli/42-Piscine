/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermen <egermen@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 01:13:49 by egermen           #+#    #+#             */
/*   Updated: 2023/02/23 01:13:52 by egermen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	long_nb;

	long_nb = nb;
	i = 1;
	while (i * i <= long_nb)
	{
		if (i * i == long_nb)
			return (i);
		i++;
	}
	return (0);
}
