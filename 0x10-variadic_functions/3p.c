#include "variadic_functions.h"



void
op_char (va_list list)
{
  printf ("%c", va_arg (list, int));
}

void
op_int (va_list list)
{
  printf ("%d", va_arg (list, int));
}

void
op_float (va_list list)
{
  printf ("%f", va_arg (list, double));
}

void
op_chars (va_list list)
{
  char *p;
	p = va_arg(list, char *);
  if (p == NULL)
		p = "(nil)";

	printf("%s", p);
}




void print_all(const char *const format, ...)
{
char *s = "";
  int i = 0, j = 0;
  va_list list;

  op_t ops[] = {
    {"c", op_char},
    {"i", op_int},
    {"f", op_float},
    {"s", op_chars},
    
  };

  va_start (list, format);
 
  while (format != NULL && format[j] != '\0')
   
    {
    
        i = 0;
      while (i < 4)
	{
	   
	  if (ops[i].op[0] == format[j])
	    {
	        printf("%s", s);
	      ops[i].f (list);
	      s = ", ";
				break;
	
	    }
	  i++;
	}
      j++;
    }
  va_end (list);
}
