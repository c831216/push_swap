
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "struct.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_all
{
	char		**input;
	int			*stack_b;
	char		**stack;
	char		**stack_a;
	char 		**tmp;
	int			k;
	int 		m;
	int 		*int_stack_a;
	int			*int_stack_b;
	int			a_counter;
	int			b_counter;
	int 		i; 
	int 		j;
	int			b;
	int 		count;
	int			a_stack_size;
	int 		low;
	int 		mid;
	int 		high;
}						t_all;

int		error_free(int ac, char **av);
void	store_2d_array(int ac, char **av, t_all *all);
void	dup_check(t_all *all);
void	make_int_array(t_all *all);
void	print_stacks(t_all *all);
int		check_order(t_all *all);
void	sa(t_all *all);
void	sb(t_all *all);
void	pa(t_all *all);
void	pb(t_all *all);
void	ra(t_all *all);
void	rb(t_all *all);
void	rra(t_all *all);
void	rrb(t_all *all);
void	if_three(t_all *all);
void	hi_low(t_all *all);
void	stack_rank(t_all *all);

#endif