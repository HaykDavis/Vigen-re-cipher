NAME		= Scrambler
NAME_C		= Decoder

SRCS		= main_scrambler.c
SRCS_C		= main_decoder.c
SRCS_S		= utils.c

CC = gcc -g

RM = rm -f

FLAGS = -Wall -Wextra -Werror

all: $(NAME) $(NAME_C) 

$(NAME) : $(SRCS) $(SRCS_S)
	@$(CC) $(FLAGS) $(SRCS) $(SRCS_S) -o $(NAME)
	@printf "Scrambler was build ✅\n"

$(NAME_C) : $(SRCS_C) $(SRCS_S)
	@$(CC) $(FLAGS) $(SRCS_C) $(SRCS_S) -o $(NAME_C)
	@printf "Decoder was build ✅\n"

clean:
		@$(RM) $(NAME) $(NAME_C)
		@printf "Everything is in trash 🗑\n"

fclean: clean

re: fclean all

rebonus: fclean bonus

.PHONY : all clean fclean re bonus rebonus