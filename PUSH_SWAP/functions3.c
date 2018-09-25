#include "push_swap.h"
/* 1 */
void stack_rank(t_all *all)
{
  int i;
  int j;
  int sumof;
  int *ranked_stack;
  int *stack_a;

  ranked_stack = (int *)malloc(sizeof(int) * all->a_counter);
  stack_a = (int *)malloc(sizeof(int) * all->a_counter);
  i = 1;
  while (i < all->a_counter)
  {
    ranked_stack[i] = all->a_counter;
    i++;
  }
  i = 0;
  j = 0;
  while (i < all->a_counter)
  {
    j = 0;
    sumof = 1;
    while (j < all->a_counter)
    {
      if (all->int_stack_a[i] < all->int_stack_a[j])
      {
        ranked_stack[j] = ranked_stack[j] - 1;
        sumof++;
      }
      j++;
    }
    stack_a[i] = all->a_counter - sumof + 1;
    i++;
  }
  i = 0;
  while (i <= all->a_counter)
  {
    all->int_stack_a[i] = stack_a[i];
    i++;
  }
}
/* 2 */
void  ss(t_all *all)
{
  sa(all);
  sb(all);
}
/* 3 */
void rr(t_all *all)
{
  ra(all);
	rb(all);
}
/* 4 */
void  rrr(t_all *all)
{
	rra(all);
  rrb(all);
}
/* 5 */
// void err()
// {
//   ft_putstr_fd("Error\n", 2);
//   exit (0);
// }