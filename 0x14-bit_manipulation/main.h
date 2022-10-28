#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <math.h>
#include <stdlib.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int convert_to_decimal(unsigned int n);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif
