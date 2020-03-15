#include "variadic_functions.h"



void print_all(const char * const format, ...)
{
int i = 0;
va_list list;
va_start (list, format);

op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_chars},
	};
va_(list,format)

while (i < 4)
 if
 (ops[i].op[0] == const[i]; //op character string 
  ops [i].f(list);
break;	
}


void op_char(va_list)
{
printf ("%c", va_arg(list, int));
}

void op_int(va_list)
{
printf ("%d", va_arg(list, int));
}

void op_float(va_list)
{
printf ("%f", va_arg(list, double));
}

void op_chars(va_list)
{
printf ("%s", va_arg(list, char *));
}

