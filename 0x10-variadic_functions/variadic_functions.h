#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - Struct op
 *
 * @op: The operator
	 * @f: The function associated
 */
<<<<<<< HEAD


typedef struct op
=======
typedef struct ops
>>>>>>> e82d0401fc991e448f7e52eea58c5dfa2cbb9639
{
  char *op;
  void (*f) ();
} op_t;


#endif
