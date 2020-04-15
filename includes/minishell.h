/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dthan <dthan@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 11:22:29 by dthan             #+#    #+#             */
/*   Updated: 2020/04/15 23:18:16 by ihwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "../libft/includes/libft.h"
# include <limits.h>
# include <unistd.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/signal.h>

# include "shell_error.h"
# include "ast.h"
# include "token.h"
# include "utilities.h"
# include "sh.h"

# define NORM 0
# define CHILD_FAILURE 1
/* NORM and CHILD_FAILURE
** For ft_exit function,
** NORM, when a user types 'exit' and
** CHILD_FAILURE, when a child process has faild to
** execute the other binary
*/



typedef struct	s_exe
{
	int			ac;
	char		**av;
}				t_exe;

char **g_env;

typedef struct stat t_stat;
typedef struct dirent t_dir;

/*
**	Lexer
*/

t_token	*lexical_analysis(char *input);

/*
**	Parser
*/

t_astnode	*syntax_analysis(t_token *token);


/*
** Utilities
*/

int	ft_isspace(int c);
char	*ft_strndup(char *str, size_t len);
void	ft_arraydel(char **string_array);

/*
** Prompt
*/

char	*get_input(int level);

/*
** Commands
*/

void		ft_env(void);
void		ft_pwd(void);
void		ft_echo(t_exe *c);
void		ft_exit(t_exe *coms, int opt);
void		ft_cd(t_exe *c);
void		ft_setenv(t_exe *c);
void		ft_unsetenv(t_exe *c);
int			possible_to_access_dir(t_exe *c);

/*
** Executor
*/

void executor(t_astnode *ast);

#endif
