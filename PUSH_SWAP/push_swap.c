#include "push_swap.h"

int main(int ac, char **av)
{
	t_all	*all;
	
	all = (t_all *)malloc(sizeof(t_all)); 
	store_2d_array(ac, av, all); 
	dup_check(all); 
	make_int_array(all);
    if (ac > 1 && (check_order(all) != 1))
	{
/* Rank stack, then send to b starting from asdf lowest */
		stack_rank(all);
/* if only 2 digits are passed then swap like this */
		if (all->a_counter == 2)
		{
			sa(all);
			ft_putstr("sa\n");
		}
/* if only 3 digits are passed then sort like this */
		hi_low(all);
		if (all->a_counter == 3)
		{
			hi_low(all);
			if_three(all);
		}
/* if 4 didgits then pass smallest do 3 bring back */
		if (all->a_counter == 4)
		{
			/* pb lowest 2 then sort a and pa */
			while (all->b_counter < 1)
			{
				if (all->int_stack_a[0] < 2)
				{
					pb(all);
					ft_putstr("pb\n");
				}
				else
				{
					ra(all);
					ft_putstr("ra\n");
				}
			}

			hi_low(all);
			if_three(all);
			pa(all);
			ft_putstr("pa\n");
		}
/* if 5 digits are passed then sort like this */
		if (all->a_counter == 5)
		{
			/* pb lowest 2 then sort a and pa */
			while (all->b_counter < 2)
			{
				if (all->int_stack_a[0] < 3)
				{
					pb(all);
					ft_putstr("pb\n");
				}
				else
				{
					ra(all);
					ft_putstr("ra\n");
				}
			}
			hi_low(all);
			if_three(all);
			while (all->a_counter < 5)
			{
				if (all->int_stack_b[0] < all->int_stack_b[1])
				{
					sb(all);
					ft_putstr("sb\n");
					pa(all);
					ft_putstr("pa\n");
					pa(all);
					ft_putstr("pa\n");
				}
				else
				{
					pa(all);
					ft_putstr("pa\n");
					pa(all);
					ft_putstr("pa\n");
				}
			}
		}
	}
    free(all);
	return (0);
}