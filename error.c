#include "push_swap.h"

void	error_print_exit(char *error_msg)
{	
	ft_putstr_fd("Error", STDERR_FILENO);
	ft_putstr_fd(error_msg, STDERR_FILENO);	
	exit (EXIT_FAILURE);
}
