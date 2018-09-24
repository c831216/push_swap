/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csolomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 14:42:41 by csolomo           #+#    #+#             */
/*   Updated: 2018/09/12 14:49:49 by csolomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* This is just a test */
int main(int ac, char **av)
{
	if (ac > 2)
  {
    t_all *all;
    char *line;

    all = (t_all *)malloc(sizeof(t_all));
    store_2d_array(ac, av, all);
    dup_check(all);
    make_int_array(all);
    while (get_next_line(0, &line))
    {
      if (!ft_strcmp(line, "sa"))
        sa(all);
      else if (!ft_strcmp(line, "sb"))
        sb(all);
      else if (!ft_strcmp(line, "ss"))
      {
        sa(all);
        sb(all);
      }
      else if (!ft_strcmp(line, "pa"))
        pa(all);
      else if (!ft_strcmp(line, "pb"))
        pb(all);
      else if (!ft_strcmp(line, "ra"))
        ra(all);
      else if (!ft_strcmp(line, "rb"))
        rb(all);
      else if (!ft_strcmp(line, "rr"))
      {
        ra(all);
        rb(all);
      }
      else if (!ft_strcmp(line, "rra"))
        rra(all);
      else if (!ft_strcmp(line, "rrb"))
        rrb(all);
      else if (!ft_strcmp(line, "rrr"))
      {
        rra(all);
        rrb(all);
      }
      else
      {
        ft_putstr("Error1\n");
        return (0) ;
      }
      all->i = 0;
      // printf("stored in lin %s\n", line);
    }
    free (line);
    if (check_order(all))
      ft_putstr("OK\n");
    else
      ft_putstr("KO\n");
    // print_stacks(all);
  }
  return (0);
}
