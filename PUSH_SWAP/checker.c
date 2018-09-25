/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:42:41 by csolomo           #+#    #+#             */
/*   Updated: 2018/09/25 13:36:42 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			cha(char *line, char *c)
{
	if (!ft_strcmp(line, c))
		return (1);
	else
		return (0);
}

int			main(int ac, char **av)
{
	t_all	*all;
	char	*l;

	all = (t_all *)malloc(sizeof(t_all));
	store_dup_make(all, ac, av);
	if (ac > 2)
	{
		while (get_next_line(0, &l))
		{
			if ((cha(l, "sa")) || (cha(l, "sb")) || (cha(l, "ss")))
				check_sheet(all, l);
			else if ((cha(l, "pa")) || (cha(l, "pb")) || (cha(l, "ra")))
				check_sheet(all, l);
			else if ((cha(l, "rb")) || (cha(l, "rr")) || (cha(l, "rra")))
				check_sheet(all, l);
			else if ((cha(l, "rrb")) || (cha(l, "rrr")))
				check_sheet(all, l);
			else
				err();
		}
		free(l);
		ko_check(all);
	}
	return (0);
}
