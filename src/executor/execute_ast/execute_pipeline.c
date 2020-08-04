/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_pipeline.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihwang <ihwang@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 08:36:24 by dthan             #+#    #+#             */
/*   Updated: 2020/08/05 05:49:10 by tango            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	execute_pipeline(t_astnode *ast, t_exe *exe)
{
	execute_pipe_sequence(ast, exe);
}
