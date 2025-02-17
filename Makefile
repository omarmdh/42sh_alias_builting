# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hiantrin <hiantrin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 17:15:33 by szakaria          #+#    #+#              #
#    Updated: 2020/10/31 16:39:40 by ommadhi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 42sh

CFLAGS = -Wall -Wextra -Werror

_lCYAN = \x1b[96m
_lYELLOW = \x1b[93m
_lGREEN = \x1b[92m
_lBLUE = \x1b[94m
_RED = \x1b[31m
_BOLD = \x1b[1m
_END = \x1b[0m

LIB = libft/libft.a
LIB2 = GTN/get_next_line.c

SRC = 	shell_src/minishell.c\
 		GTN/get_next_line.c\
		shell_src/trait.c\
		shell_src/execve.c\
		shell_src/list.c\
		shell_src/execve_help.c\
		shell_src/init_shell.c\
		shell_src/make_job.c\
		shell_src/wait_job.c\
		shell_src/jobs.c\
		shell_src/help.c\
		shell_src/all_command_jobs.c\
		shell_src/help_command_jobs.c\
		shell_src/help_command_jobs_v2.c\
		shell_src/help_v2.c\
		shell_src/checker.c\
		shell_src/checker_v2.c\
		shell_src/checker_v3.c\
		shell_src/checker_v4.c\
		shell_src/parsing.c\
		shell_src/help_parsing.c\
		shell_src/help_parsing_v2.c\
		shell_src/help_parsing_v3.c\
		shell_src/trait_pipe.c\
		shell_src/redirect.c\
		shell_src/redirect_v2.c\
		shell_src/replace_with_env.c\
		shell_src/make_home.c\
		shell_src/slash_quote.c\
		shell_src/redirect_help.c\
		shell_src/redirect_v3.c\
		shell_src/parse_the_redirect.c\
		shell_src/redirect_help_v2.c\
		shell_src/help_trait_and.c\
		shell_src/get_path.c\
		shell_src/filter_command.c\
		shell_src/built_back_fore.c\
		shell_src/built_env_echo.c\
		shell_src/mini_type.c\
		shell_src/built_unset.c\
		shell_src/built_export.c\
		shell_src/built_cd.c\
		shell_src/help_cd.c\
		shell_src/help_cd_v2.c\
		shell_src/variables.c\
		shell_src/move_variables.c\
		shell_src/help_variable.c\
		shell_src/help_v3.c\
		shell_src/signals.c\
		shell_src/trait_slash_quote.c\
		shell_src/help_v4.c\
		shell_src/help_slash_quote.c\
		readline/ft_autocomp2.c\
        readline/ft_copy.c\
        readline/ft_multi_line.c\
        readline/ft_mv_cursor.c\
        readline/ft_press_key.c\
        readline/ft_readline.c\
        readline/ft_save_history.c\
        readline/get_cur_posix.c\
        readline/ft_scroll.c\
        readline/ft_add_and_del_char.c\
        readline/ft_goto.c\
        readline/ft_ctr_c.c\
        readline/ft_free_his.c\
        readline/ft_print_his.c\
        readline/ft_autoco_search.c\
		ft_autocmp/ft_search_in_env.c\
        ft_autocmp/ft_init_autocmp.c\
        ft_autocmp/ft_search_for_bin.c\
        ft_autocmp/ft_print_matchs.c\
        ft_autocmp/ft_search_in_dirs.c\
        ft_autocmp/ft_alloc_list.c\
		ft_history/ft_save_his_in_file.c\
		
C       = gcc
OBJ = $(SRC:.c=.o)
DEP = sh.h

all : $(NAME)

$(NAME) : LIB $(OBJ) 
		@$(C) -ltermcap $(CFLAGS)  $(OBJ) -o $(NAME) libft/libft.a

LIB:
		@make -C libft

%.o	: %.c $(DEP)
		$(C) $(CFLAGS)  -o $@ -c $<

clean	:
		@make clean -C libft
		@rm -f $(OBJ)

fclean	: clean
		@make fclean -C libft
		@rm -f $(NAME)

re	: fclean all
