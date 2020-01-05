#ifndef _MONTY_
#define _MONTY_
#include <stdio.h>
#include <stdlib.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, char *token2, unsigned int line_number);
} instruction_t;


/* needed functions in main */
void verif(int argc);
void exist(FILE *f, char *agrv[]);

void inline_f(FILE *F);
void (*get_func(char *word))(stack_t **, char *, unsigned int);


/* opcode functions */
void opcode_push(stack_t **stack, char *token2, unsigned int line_number);
void opcode_pall(stack_t **stack, __attribute__((unused))char *token2, __attribute__((unused))unsigned int line_number);
void opcode_pint(stack_t **stack, __attribute__((unused))char *token2, unsigned int line_number);
#endif /* _MONTY_ */
