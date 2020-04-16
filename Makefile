NAME = 21sh

LIBFT_PATH = libft/

FLAGS = -Wall -Werror -Wextra -g #add -g for visual debugger
INC = -I ./includes/ -I ./libft/includes

SRCS = src/main.c \
src/lexer/lexical_analysis.c \
src/lexer/white_space_destroyer.c \
src/lexer/tokenizer.c \
src/lexer/get_token_info.c \
src/lexer/lexer_helper.c \
src/parser/syntax_analysis.c \
src/parser/AST/and_or.c \
src/parser/AST/ast_tool.c \
src/parser/AST/cmd_name.c \
src/parser/AST/cmd_suffix.c \
src/parser/AST/word.c \
src/parser/AST/command.c \
src/parser/AST/complete_command.c \
src/parser/AST/file_name.c \
src/parser/AST/io_file.c \
src/parser/AST/io_here.c \
src/parser/AST/io_redirect.c \
src/parser/AST/list.c \
src/parser/AST/pipe_sequence.c \
src/parser/AST/pipeline.c \
src/parser/AST/simple_command.c \
src/parser/AST/here_end.c \
src/parser/print_ast.c \
src/utilities/tool_for_checking.c \
src/environ/utill.c \
src/utilities/ft_isspace.c \
src/utilities/ft_strndup.c \
src/utilities/ft_arraydel.c \
src/utilities/error.c \
src/prompt/dquote.c \
src/signal/sig_handler.c \
src/executor/executor.c \
src/executor/builtins.c \
src/executor/executor_tools.c \
src/executor/execute_ast/execute_complete_command.c \
src/executor/execute_ast/execute_list.c \
src/executor/execute_ast/execute_and_or.c \
src/executor/execute_ast/execute_pipeline.c \
src/executor/execute_ast/execute_pipe_sequence.c \
src/executor/execute_ast/execute_command.c \
src/executor/execute_ast/execute_simple_command.c

OBJS = main.o \
lexical_analysis.o \
white_space_destroyer.o \
tokenizer.o \
get_token_info.o \
lexer_helper.o \
syntax_analysis.o \
and_or.o \
ast_tool.o \
cmd_name.o \
cmd_suffix.o \
word.o \
command.o \
complete_command.o \
file_name.o \
io_file.o \
io_here.o \
io_redirect.o \
list.o \
pipe_sequence.o \
pipeline.o \
simple_command.o \
here_end.o \
print_ast.o \
tool_for_checking.o \
utill.o \
ft_isspace.o \
ft_strndup.o \
ft_arraydel.o \
error.o \
dquote.o \
sig_handler.o \
executor.o \
builtins.o \
executor_tools.o \
execute_complete_command.o \
execute_list.o \
execute_and_or.o \
execute_pipeline.o \
execute_pipe_sequence.o \
execute_command.o \
execute_simple_command.o

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
	@make -C ./libft
	@gcc -c $(FLAGS) $(INC) $(SRCS)
	@gcc $(FLAGS) $(OBJS) -L$(LIBFT_PATH) -lft -o $(NAME)

clean:
	@make -C ./libft clean
	@/bin/rm -f *.o

fclean: clean
	@make -C ./libft fclean
	@/bin/rm -f $(NAME)

re: fclean all
