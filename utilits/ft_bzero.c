/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosalee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 16:14:20 by lrosalee          #+#    #+#             */
/*   Updated: 2019/11/25 16:14:34 by lrosalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_bzero(void *s, size_t size)
{
	unsigned char *p;

	p = (unsigned char*)s;

	while (size > 0)
	{
		*(p++) = 0;
		size--;
	}
}
