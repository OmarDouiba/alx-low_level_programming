#include "3-calc.h"

/**
 *get_op_func - function pointer to compute given an operator
 *@s: the operator given as an input
 *Return: pointer to the function that will do the op given as
 *parameter as input
 */

int(*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{ "+", op_add
		},
		{ "-", op_sub
		},
		{ "*", op_mul
		},
		{ "/", op_div
		},
		{ "%", op_mod
		},
		{
			NULL, NULL
		}
	};

	i = 0;
	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && !(*(s + 1)))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
