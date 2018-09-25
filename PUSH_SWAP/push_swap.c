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
		stack_rank(all);/* Rank stack, then send to b starting from asdf lowest */
		if (all->a_counter == 2)
			if_2(all);
		if (all->a_counter == 3)/* if only 3 digits are passed then sort like this */
			if_3(all);
		if (all->a_counter == 4)/* if 4 didgits then pass smallest do 3 bring back */
			if_4(all);
		if (all->a_counter == 5)/* if 5 digits are passed then sort like this */
			if_5(all);
	}
    free(all);
	return (0);
}