/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:42:41 by csolomo           #+#    #+#             */
/*   Updated: 2018/09/25 11:54:15 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int ac, char **av)
{
	t_all	*all;
	char	*line;

	all = (t_all *)malloc(sizeof(t_all));
	store_2d_array(ac, av, all);
	dup_check(all);
	make_int_array(all);
	if (ac > 2)
	{
		while (get_next_line(0, &line))
		{
			if ((!ft_strcmp(line, "sa")) || (!ft_strcmp(line, "sb")) || (!ft_strcmp(line, "ss"))) 
				check_sheet(all, line);
			else if ((!ft_strcmp(line, "pa")) || (!ft_strcmp(line, "pb")) || (!ft_strcmp(line, "ra")))
				check_sheet(all, line);
			else if ((!ft_strcmp(line, "rb")) || (!ft_strcmp(line, "rr")) || (!ft_strcmp(line, "rra")))
				check_sheet(all, line);
			else if ((!ft_strcmp(line, "rrb")) || (!ft_strcmp(line, "rrr")))
				check_sheet(all, line);
			else 
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
			print_stacks(all);
		}
		free(line);
		if (check_order(all))
			ft_putstr("OK\n");
		else
			ft_putstr("KO\n");
	}
	return (0);
}