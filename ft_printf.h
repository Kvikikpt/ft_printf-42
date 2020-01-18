/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnikia <cnikia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 18:20:44 by cnikia            #+#    #+#             */
/*   Updated: 2019/08/26 18:06:25 by cnikia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int					ft_printf(const char *format, ...);
int					ft_atoi(const char *str);
void				ft_putchar(char c);
int					ft_strlen(char *str);
char				*ft_strchr(const char *s, int c);

typedef struct		s_pf
{
	char			flag;
	int				wide;
	int				prec;
	char			mode;
	char			type;
	char			sign;
	char			*arg;
	char			proc;
	int				dot;
	int				b;
	int				len;
	int				malloc;
	int				wst;
}					t_pf;

void				ft_putstr(char const *s, t_pf **pf);
void				flag_digit(va_list ap, t_pf **pf);
void				flag_str(va_list ap, t_pf **pf);
void				flag_percent(t_pf **pf);
void				flag_double(va_list ap, t_pf **pf);
void				add_flag(t_pf **pf, const char *str);
void				add_wide(va_list ap, t_pf **pf, const char *str, int *a);
int					add_prec(va_list ap, t_pf **pf, const char *str, int *a);
void				add_mode(t_pf **pf, const char *str, int *a);
void				final_print(t_pf **pf);
void				final_print_c(t_pf **pf);
t_pf				*pf_new();

#endif
