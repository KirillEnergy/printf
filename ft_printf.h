/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosalee <lrosalee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 17:53:56 by lrosalee          #+#    #+#             */
/*   Updated: 2020/02/11 17:53:56 by lrosalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_FT_PRINTF_H
# define PRINTF_FT_PRINTF_H

/*
** WARNING header below should be deleted before the validation
*/

# include <stdio.h>

/*
**   WARNING header above should be deleted before the validation
*/

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <stdint.h>

typedef struct		s_printf
{
	char			conversion_percent;
	int				precision;
	int				width_option;
	int				zero;
	int				znak_plus;
	int				znak_minus;
	int				hash;
	int				space;
	int				l;
	int				bl;
	int				j;
	int				z;
	int				h;
	int				inf;
	int				nan;
}					t_printf;

typedef struct		s_str_and_size
{
	char			*str;
	int				sz;
}					t_str_and_size;

int					ft_printf(const char *format, ...);
int					parsing_percent(va_list *arg, char **format);
int					width(char *str);
int					length(char *str, char c);
int					print_space(t_printf p, long long nb);
int					print_plus(t_printf p, long long nb);
int					printing_width(t_printf p, int written);
int					printing_padding_of_zero(t_printf p, int char_printed);
int					print_precision(t_printf p, long long nb, int nb_len);
int					print_width_minus(t_printf p, int char_printed);

/*
**  			Numbers
*/

int					print_num(va_list *arg, t_printf p);
int					print_d_longlong(int char_printed, t_printf p,
						long long nb);
size_t				ft_longlong_len(long long nbr);
int					print_o_unsigned(va_list *arg, int char_printed,
						t_printf p);
int					print_o_longlong(int char_printed, t_printf p,
						long long nb);
int					print_u_l(int char_printed, t_printf p,
						unsigned long long nb);
int					print_x_l(int char_printed, t_printf p,
						unsigned long long nb);
long double			ft_va_arg(va_list *arg, t_printf p);
/*
**  			Tools
*/

int					precision(char *str);
int					zero_flag(char *str, int minus);
int					plus_flag(char *str);
int					minus_flag(char *str);
int					hash_flag(char *str);
int					space_flag(char *str, int plus);
int					print_hash(t_printf p, long long nb);
int					hash_length(t_printf p, long long nb);

/*
**   			Char
*/

int					printing_only_char(int printed_char, t_printf p);
int					printing_string_char(va_list *arg, t_printf p);
int					print_ptr(int char_printed, va_list *arg, t_printf p);

/*
**  			Utils
*/

void				ft_putchar(char c);
char				*ft_strchr(const char *s, int c);
char				*ft_strnew(size_t size);
void				ft_bzero(void *s, size_t size);
char				*ft_strncpy(char *dst, const char *src, size_t len);
size_t				ft_strlen(const char *str);
char				*ft_strndup(const char *src, size_t n);
int					ft_atoi(const char *str);
void				*ft_memset(void *destination, int c, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_str_multi_chr(char *str, char *c);
void				ft_putnstr(const char *str, size_t n);
void				ft_putstr(char const *s);
size_t				ft_u_longlong_len(unsigned long long nb);
int					print_u_l(int char_printed, t_printf p,
						unsigned long long nb);
void				ft_putnchar(char c, size_t n);
void				ft_put_u_longlong_base(unsigned long long nb, char base);
size_t				ft_u_len_base(unsigned long long int nb, char base);
int					ft_hex_len(unsigned long long nb);
void				ft_print_u_hex(unsigned long long nb, const char *str);
size_t				ft_ptr_len_base(size_t ptr, unsigned int base);

#endif
