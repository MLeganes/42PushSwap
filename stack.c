#include "push_swap.h"

void stack_init(t_push_swap *ps)
{
	ps->stack_a = NULL;
	ps->stack_b = NULL;
	ps->size_a = 0;
	ps->size_b = 0;
	ps->input_array = NULL;
	ps->array_size = 0;
	ps->array_start = 0;
}