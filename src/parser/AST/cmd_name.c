/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_name.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihwang <ihwang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 08:58:06 by dthan             #+#    #+#             */
/*   Updated: 2020/08/05 05:44:26 by tango            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

/*
** cmd_name : WORD     //Apply rule 7a
*/

t_astnode	*cmd_name(t_token **token)
{
	return (word(token));
}
