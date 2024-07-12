NAME		= push_swap

LIBFT		= ft
LIBFTDIR	= libft
MAKELIBFT	= @$(MAKE) -C $(LIBFTDIR)

SRC			= src
INC			= include
OBJ			= obj
CFILES		= main.c swap.c rotate.c parse.c sort_more.c  sort_three.c\
			 	sort_five.c push_other.c display.c reverse.c push.c sort.c
HFILES		= push_swap.h
OFILES		= $(CFILES:.c=.o)
SRCS		= $(addprefix $(SRC)/, $(CFILES))
OBJS		= $(addprefix $(OBJ)/, $(OFILES))
HEADERS		= $(addprefix $(INC)/, $(HFILES))

CC			= clang
CFLAGS		= -Wall -Wextra -Werror -g
RM			= rm -rf

$(OBJ)/%.o:	$(SRC)/%.c
			$(CC) $(CFLAGS) -I$(LIBFTDIR) -I$(INC) -c $< -o $@

$(NAME):	$(OBJ) $(OBJS)
			$(MAKELIBFT)
			$(CC) $(OBJS) -L$(LIBFTDIR) -l$(LIBFT) -o $(NAME)

$(OBJ):
			@mkdir -p $(OBJ)

all:		$(NAME)

clean:
			$(MAKELIBFT) fclean
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

norme:
			$(MAKELIBFT)
			norminette $(SRCS) $(HEADERS)

.PHONY:		all clean fclean re norme visual
