NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRC = src/ft_printf.c \
	  src/ft_printf_char.c \
	  src/ft_printstring.c \
	  src/ft_print_digit.c \
	  libft_printf/ft_strdup.c \
	  libft_printf/ft_strlen.c \
	  src/ft_print_unsigned_digit.c \
	  src/ft_voidpointer.c \
	  src/ft_print_digit_hex.c \
	  src/ft_to_hex.c
OBJ = $(SRC:.c=.o)
LIBFT_DIR = libft_printf/
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR)
	ar rcs $(NAME) $(OBJ) $(LIBFT)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY:
	all clean fclean re bonus
