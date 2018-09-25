#include "push_swap.h"
/* 1 */
void store_2d_array(int ac, char **av, t_all *all) /*1 This is going to store my input into a 2d array */
{
  all->stack = (char **)malloc(sizeof(char *) * (ac));
  all->stack_a = (char **)malloc(sizeof(char *) * (ac));
  all->i = 0;
  while (all->i < ac - 1)
  {
    all->stack[all->i] = ft_strdup(av[all->i + 1]);
    all->i++;
  }
  all->stack[all->i] = NULL;
  all->i = 0;
  all->k = 0;
  all->m = 0;
  while (all->stack[all->i])
  {
    all->k = 0;
    all->tmp = ft_strsplit(all->stack[all->i], ' ');
    while (all->tmp[all->k])
    {
      all->stack_a[all->m] = all->tmp[all->k];
      all->m++;
      all->k++;
    }
    all->i++;
  }
}
/* 2 */
void dup_check(t_all *all) /*2 I now need to take my stored stack and check for duplicates*/
{
  all->j = 0;
  all->b = 0;
  while (all->j < all->m)
  {
    all->i = 0;
    all->count = 0;
    all->tmp[0] = all->stack_a[all->j];
    while (all->i < all->m)
    {
      if (!ft_strcmp(all->stack_a[all->i], all->tmp[0]))
      {
        all->b = 0;
        while (all->stack_a[all->i][all->b])
        {
          if (!ft_isdigit(all->stack_a[all->i][all->b]))
          {
            ft_putstr_fd("Error\n", 2);
            exit(0);
          }
          all->b++;
        }
        all->count++;
        if (all->count > 1)
        {
          ft_putstr("Error\n");
          exit(0);
        }
      }
      all->i++;
    }
    all->j++;
  }
}
/* 3 */
void make_int_array(t_all *all) /*3 I now need to convert to int array */
{
  all->i = 0;
  all->int_stack_a = (int *)malloc(sizeof(int) * all->m);
  all->a_counter = 0;
  while (all->i < all->m)
  {
    all->int_stack_a[all->i] = ft_atoi(all->stack_a[all->i]);
    if ((int)(all->int_stack_a[all->i]) > -2147483647 && (int)(all->int_stack_a[all->i]) < 2147483647)
    {
      all->i++;
      all->a_counter++;
    }
    else
    {
      ft_putstr_fd("Error\n", 2);
      exit(0);
    }
  }
  all->int_stack_b = (int *)malloc(sizeof(int) * (ft_strlen((const char *)all->int_stack_a)));
  all->i = 0;
  while (all->i < (int)sizeof(all->int_stack_b))
  {
    all->int_stack_b[all->i] = 0;
    all->i++;
  }
  all->b_counter = 0;
  all->a_stack_size = all->a_counter;
}
/* 4 */
void print_stacks(t_all *all) /*4 This prints the actual stacks*/
{
  dprintf(2, "\nSTACK A       STACK B\n");
  all->i = 0;
  while (all->i < all->a_counter || all->i < all->b_counter)
  {
    dprintf(2, "%d             %d\n", all->int_stack_a[all->i], all->int_stack_b[all->i]);
    all->i++;
  }
  dprintf(2, "\n");
}
/* 5 */
int check_order(t_all *all)
{
  all->i = 0;
  while (all->i < all->a_counter - 1)
  {
    if (all->int_stack_a[all->i] > all->int_stack_a[all->i + 1])
      return (0);
    all->i++;
  }
  return (1);
}
