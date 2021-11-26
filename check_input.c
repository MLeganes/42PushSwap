#include "push_swap.h"



void get_argv(t_push_swap *ps, int args, char **argv)
{
	int i;
	int *nbrptr;
	int nbr;
	int ret;

	nbrptr = &nbr; 
	
	ps->input_argv = &argv[1];
	if (args < 2)
		error_print_exit("Invalid input arguments.");
	if (args == 2)
	{
		ft_printf("2 args %s \n", argv[1]);
		// check string			
		ps->size = 0;
	}
	else
	{
		//check array isdigits
		ps->size = 0;
	}	
	i = 1;
	while(argv[i])
	{
		//check argument		
		//create t_struct
		// Add in stack-a

		ret = ft_strtoi(argv[i], nbrptr);
		if ( ret == 0)
		{
			ft_printf("argv strtoi ret: %d value: %d\n", ret, *nbrptr);
		}
		i++;
	}
}

// static int	parse_str()
// {
// }

// static int	parse_array()
// {
// }