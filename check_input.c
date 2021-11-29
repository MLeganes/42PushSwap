#include "push_swap.h"



void get_argv(t_push_swap *ps, int args, char **argv)
{
	//ps->input_array = &argv[1];
	if (args < 2)
		error_print_exit("Invalid input arguments.");
	if (args == 2)
	{		
		ft_printf("[debugger] 2 args %s \n", argv[1]);
		ps_strtoarray(ps, argv[1]);
		ps->array_start = 0;
		ps_create_stack_a(ps);
	}
	else if (args > 2)
	{
		//there is an array!
		ft_printf("[debugger] more than 2 args %s \n", argv[1]);
		ps->array_size = args -1;
		ps->input_array = &argv[1];
		ps->array_start = 1;
		ps_create_stack_a(ps);		
	}	
	
}

void ps_create_stack_a(t_push_swap *ps)
{
	int i;
	int ret;
	int *nbrptr;
	int nbr;

	nbrptr = &nbr;
	i = 0;
	while(ps->input_array[i])
	{
		ret = ft_strtoi(ps->input_array[i], nbrptr);
		if ( ret == 0)
		{
			ft_printf("argv ft_strtoi ret: %d value: %d\n", ret, *nbrptr);
		}
		else
		{
			error_print_exit("Invalid input arguments.");
		}
		i++;
	}

}

void	ps_strtoarray(t_push_swap *ps, char *str)
{
	int		i;

	ps->input_array = ft_split(str, ' ');
	if (!ps->input_array)
		error_print_exit("Error reading string argv");
	i = 0;
	while (ps->input_array[i] != NULL)
		i++;
	ps->array_size = i;	
	return ;
}
