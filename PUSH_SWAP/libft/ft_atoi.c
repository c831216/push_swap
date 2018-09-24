/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:08:41 by csolomo           #+#    #+#             */
/*   Updated: 2018/06/13 10:45:32 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int ngv;
	int nbr;
	int	lng;

	i = 0;
	ngv = 1;
	nbr = 0;
	lng = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\v')
			|| (str[i] == '\f') || (str[i] == '\r') || (str[i] == '\n'))
		i++;
	if (str[i] == '-')
		ngv = -1;
	if ((str[i] == '-' || str[i] == '+'))
		i++;
	while (ft_isdigit(str[i]))
	{
		nbr = ((nbr * 10) + (int)str[i] - '0');
		i++;
		lng++;
	}
	if (lng > 19)
		return ((ngv == -1) ? 0 : -1);
	return (nbr * ngv);
}
