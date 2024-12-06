/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:56:40 by marvin            #+#    #+#             */
/*   Updated: 2024/11/20 09:56:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include "libft/libft.h"

int		ft_printf(const char *placeholders, ...);
int		ft_print_ptr(unsigned long long ptr, int fd);
int		ft_print_hex(char format, va_list args, int fd);
int		ft_putnbr_base_fd(unsigned long long n, char *base, int fd);
int		ft_putnbr_uns_fd(unsigned int n, unsigned int fd);

#endif