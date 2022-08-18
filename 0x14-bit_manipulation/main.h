#ifndef MAIN_h
#define MAIN_h

/*_putchar function*/
int _putchar(char c);

/*0-binary_to_uint function.*/
unsigned int binary_to_uint(const char *b);

/*1-print_binary function*/
void print_binary(unsigned long int n);

/*2-get_bit function*/
int get_bit(unsigned long int n, unsigned int index);

/* 3-set_bit function*/
int set_bit(unsigned long int *n, unsigned int index);

/*4-clear_bit function*/
int clear_bit(unsigned long int *n, unsigned int index);

/*5-flip_bits function*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif

