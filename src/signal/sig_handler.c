/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sig_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 17:21:07 by ihwang            #+#    #+#             */
/*   Updated: 2020/04/01 14:55:37 by ihwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int			is_eof(char *line)
{
	if (line)
		return (1);
	return (0);
}

static void	sig_int_handler(int sig)
{
//	int		a;

//	a = sig;
// using (void)sign to turn off unused parameter warning
	(void)sig;
	ft_putchar('\n');
	get_prompt();
	signal(SIGINT, sig_int_handler);
}

static void	sig_tstp_handler(int sig)
{
//	int		a;

//	a = sig;
// using (void)sign to turn off unused parameter warning
	(void)sig;
	ft_putchar('\n');
	get_prompt();
	signal(SIGTSTP, sig_tstp_handler);
}

void		sig_controller(int option)
{
	if (option == PARENT)
	{
		signal(SIGINT, sig_int_handler);
		signal(SIGTSTP, sig_tstp_handler);
	}
	else if (option == CHILD)
	{
		signal(SIGINT, SIG_DFL);
		signal(SIGTSTP, SIG_DFL);
	}
}
