/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:49:36 by ihwang            #+#    #+#             */
/*   Updated: 2020/02/28 00:58:52 by tango            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *pt_s1;

	pt_s1 = s1;
	while (*pt_s1)
		pt_s1++;
	while (*s2)
		*(pt_s1++) = *(s2++);
	*pt_s1 = '\0';
	return (s1);
}