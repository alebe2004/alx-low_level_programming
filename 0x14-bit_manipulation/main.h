#ifndef JOLBERTON_H
#define HOLBERTON_H

/*
 * File: holberton.h
 * AUth: Breennan D Baraban
 * Desc: Header file containing prototypes for all functions
 *       written in the 0x13-bit_manipulation directiory.
 */

int _putchar(char c);
unsigned int binary_to_unit(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

 int set_bit(unsigned long int *n, unsigned int index);
 int clear_bit(unsigned long int *n, unsigned int index);
 unsigned int flip_bits(unsigned long int n, unsigned long int m);
 int get_endinness(void);

#endif /*HOLBERTON_H */
