/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihwang <ihwang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 08:38:16 by dthan             #+#    #+#             */
/*   Updated: 2020/08/05 05:49:03 by tango            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	execute_command(t_astnode *ast, t_exe *exe)
{
	execute_simple_command(ast, exe);
}
