#include "push_swap.h"

void stack_init(t_push_swap *ps)
{
	ps->size = 0;
	ps->size_a = 0;
	ps->size_b = 0;
	ps->stack_a = NULL;
	ps->stack_b = NULL;
}