/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:11:52 by yokitane          #+#    #+#             */
/*   Updated: 2024/09/16 17:24:29 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_putadd_fd(unsigned long nb, int fd, unsigned long base);
int	ft_putnbr_fd_lower(long long nb, int fd, int base);

#endif