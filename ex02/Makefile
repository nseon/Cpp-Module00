# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nseon <nseon@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/13 10:54:16 by nseon             #+#    #+#              #
#    Updated: 2025/10/21 12:35:13 by nseon            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	account

# ---------------FILES--------------- #

MAKE_DIR	=	.make/

SRC_DIR		=	

OBJ			=	$(patsubst %.cpp, $(MAKE_DIR)%.o, $(SRC))

DEP			=	$(patsubst %.cpp, $(MAKE_DIR)%.d, $(SRC))

# ---------------MAIN---------------- #

SRC			=	tests.cpp \
				Account.cpp \

# --------------CONFIGS-------------- #

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
CPPFLAGS	=	-MMD -MP $(addprefix -I, $(INCLUDES))

LDFLAGS		+=	$(addprefix -L, $(dir $(LIB_PATH)))
LDLIBS		+=	$(addprefix -l, $(LIB))

# --------------TARGETS-------------- #

.PHONY: all
all: $(NAME)

$(NAME): $(LIB_PATH) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $@

$(MAKE_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(LIB_PATH): force
	$(MAKE) -C $(@D)

.PHONY: norminette
norminette:
	norminette $(INC_DIR) $(SRC_DIR)

.PHONY: clean
clean:
	-for lib in $(dir $(LIB_PATH)); do $(MAKE) -s -C $$lib $@; done
	rm -rf $(MAKE_DIR)

.PHONY: fclean
fclean:
	-for lib in $(dir $(LIB_PATH)); do $(MAKE) -s -C $$lib $@; done
	rm -rf $(NAME) $(MAKE_DIR)

.PHONY: re
re: fclean
	$(MAKE)

.PHONY: force
force:

-include $(DEP)

.DEFAULT_GOAL := all