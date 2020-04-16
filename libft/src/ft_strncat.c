/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:02:35 by ihwang            #+#    #+#             */
/*   Updated: 2020/02/28 00:59:52 by tango            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *pt_s1;

	pt_s1 = s1;
	while (*pt_s1)
		pt_s1++;
	while (n-- > 0 && *s2)
		*(pt_s1++) = *(s2++);
	*pt_s1 = '\0';
	return (s1);
}