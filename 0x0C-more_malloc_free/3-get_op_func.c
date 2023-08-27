#include <stddef.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op {
    char *op;
    int (*f)(int, int);
} op_t;


/**
 * get_op_func - Selects the correct function to
 * perform the operation asked by the user.
 * @s: The operator passed as an argument to the program.
 *
 * Return: A pointer to the corresponding function or NULL if not found.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && !s[1])
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
