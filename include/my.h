/*
** EPITECH PROJECT, 2020
** MY LYB
** File description:
** MY EPITECH LIB FOR C PROGRAMING
*/

#ifndef MY_H_
#define MY_H_

#include "my.h"

typedef int my_bool;

int get_one_nbr(char str);
char my_charlowcase(char str);
int my_getnbr(char *str);
char *my_itoa(int nb);
int my_put_nbr(int nb);
void my_putstr(char *c);
void my_putchar(char c);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isnum_nm(char const *str);
int my_str_isprintable(char  const *str);
int my_str_isupper(char const *str);
char *my_strcat(char *str , char const *to_add);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest , char  const *src , int nb);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char *to_find);
char *my_strupcase(char *str);
void put_unsigned_int(unsigned int n);
void put_long_int(long int n);
void to_binary(int n);
void to_hexadecimal_min(int n);
void to_hexadecimal_maj(int n);
void to_hexadecimal_add(long long n);
void address(long long n);
void to_octal(int n);
void my_printf(char const *s, ...);
int check_args(char **av, int i, char *arg);
int my_nbrlen(int nb);
char **my_strtok(char *str, char delim);
int my_strncmp(const char *str1, const char *str2, int nbr);
int my_error(char *str, int err);

#endif /* !MY_H_ */
