#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_

/*library*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*prototype*/
int _putchar(char c);
void print_name(char *name, void (*f)(char *));


#endif
