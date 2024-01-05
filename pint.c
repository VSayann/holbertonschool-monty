#include "monty.h"

/**
 * pint - prints the value at the top of the stack followed by a new line.
 * 
 * @stack: pointer to the top of the stack
 * @line_number: line number in the file
 */

void pint(stack_p **stack, unsigned int line_number)
{
	stack_p *node = *stack;
	(void)line_number;

	if (node == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", node->n);
}