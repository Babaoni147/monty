#include "monty.h"

/**
* execute - function that executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", data_push}, {"pall", data_pall}, {"pint", data_pint},
				{"pop", data_pop},
				{"swap", data_swap},
				{"add", data_add},
				{"nop", data_nop},
				{"sub", data_sub},
				{"div", data_div},
				{"mul", data_mul},
				{"mod", data_mod},
				{"pchar", data_pchar},
				{"pstr", data_pstr},
				{"rotl", data_rotl},
				{"rotr", data_rotr},
				{"queue", data_queue},
				{"stack", data_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
