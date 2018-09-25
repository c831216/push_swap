#include "push_swap.h"
/* 1 */
void  check_sheet(t_all *all, char *line)
{
  			if (!ft_strcmp(line, "sa"))
				sa(all);
			else if (!ft_strcmp(line, "sb"))
				sb(all);
			else if (!ft_strcmp(line, "ss"))
				ss(all);
			else if (!ft_strcmp(line, "pa"))
				pa(all);
			else if (!ft_strcmp(line, "pb"))
				pb(all);
			else if (!ft_strcmp(line, "ra"))
				ra(all);
			else if (!ft_strcmp(line, "rb"))
				rb(all);
			else if (!ft_strcmp(line, "rr"))
				rr(all);
			else if (!ft_strcmp(line, "rra"))
				rra(all);
			else if (!ft_strcmp(line, "rrb"))
				rrb(all);
			else if (!ft_strcmp(line, "rrr"))
				rrr(all);
			// else
			// 	err();
			all->i = 0;
}