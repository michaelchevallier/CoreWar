# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpaincha <mpaincha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 12:19:31 by mpaincha          #+#    #+#              #
#    Updated: 2016/12/03 05:49:15 by mchevall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

H_DIR = includes/
C_DIR_PRINTF = srcs/
O_DIR_PRINTF = obj/
LIBFT = Libft/
LIB = Libft/libft.a

FLAGS = -Wall -Wextra -Werror

C_FILES_PRINTF = action_1.c
C_FILES_PRINTF += action_2.c
C_FILES_PRINTF += action_3.c
C_FILES_PRINTF += action_4.c
C_FILES_PRINTF += checkingarg.c
C_FILES_PRINTF += checkingmod.c
C_FILES_PRINTF += checkingspecprec.c
C_FILES_PRINTF += cleaning.c
C_FILES_PRINTF += diez.c
C_FILES_PRINTF += display.c
C_FILES_PRINTF += fill_mask.c
C_FILES_PRINTF += flags_minus.c
C_FILES_PRINTF += flags_plus.c
C_FILES_PRINTF += flags_space.c
C_FILES_PRINTF += ft_itoabase_imax.c
C_FILES_PRINTF += ft_itoabase_uimax.c
C_FILES_PRINTF += ft_lstdbldel_options.c
C_FILES_PRINTF += ft_printf.c
C_FILES_PRINTF += ft_strlower.c
C_FILES_PRINTF += ini.c
C_FILES_PRINTF += mod_1.c
C_FILES_PRINTF += mod_2.c
C_FILES_PRINTF += prec.c
C_FILES_PRINTF += recovery.c
C_FILES_PRINTF += wchar.c
C_FILES_PRINTF += wchar_prec.c
C_FILES_PRINTF += width.c

O_FILES_PRINTF = $(addprefix $(O_DIR_PRINTF),$(C_FILES_PRINTF:.c=.o))

all:
	make -C $(LIBFT)
	make $(NAME)

$(NAME): $(O_FILES_PRINTF)
	@rm -rf $(NAME) 2> /dev/null || echo "" > /dev/null
	cp $(LIB) $(NAME)
	ar r $(NAME) $(O_FILES_PRINTF)
	ranlib $(NAME)

	##ar rc $@ $^
	##libtool -static -o $@ $@ Libft/libft.a
	##ranlib $@

$(O_FILES_PRINTF): $(O_DIR_PRINTF)%.o: $(C_DIR_PRINTF)%.c
	@mkdir $(O_DIR_PRINTF) 2> /dev/null || echo "" > /dev/null
	$(CC) $(FLAGS) -o $@ -c $< -Iincludes

clean:
	make -C $(LIBFT) clean
	@rm -rf $(O_DIR_PRINTF) 2> /dev/null || echo "" > /dev/null

fclean: clean
	make -C $(LIBFT) fclean
	@rm -rf $(NAME) 2> /dev/null || echo "" > /dev/null

re: fclean all

.PHONY: all clean fclean re
