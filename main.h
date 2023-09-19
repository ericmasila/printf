#ifndef MAIN_H
#define MAIN_H

#define END '\0'
/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16
/* SIZES */
#define S_LONG 2
#define S_SHORT 1
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - struct
 * @id: operation selector
 * @meth: method
 */

typedef struct format
{
	char *id;
	int (*meth)();
} format_t;

int print_p(va_list params);
int print_S(va_list params);
int print_H(va_list params);
int print_h(va_list params);
int print_o(va_list params);
int print_u(va_list params);
int print_b(va_list params);
int print_r(va_list params);
int print_R(va_list params);
int print_i(va_list params);
int print_d(va_list params);
int print_c(va_list params);
int print_s(va_list params);
int print_a(void);
int print_h_aux(unsigned long int num);
int print_H_aux(unsigned int num);
int _strlen(char *s);
int _strlenc(const char *s);
int _putc(char c);
int _printf(const char *format, ...);
int rev_string(char *s);
int *_strcpy(char *dest, char *src);

#endif
