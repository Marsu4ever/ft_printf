NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
SOURCES =	convert_long_to_hex.c\
			format_specifier_logic.c\
			ft_printf.c\
			int_putchar.c\
			int_putnbr.c\
			int_putstr.c\
			uint_to_lowercase_hex.c\
			uint_to_uppercase_hex.c\
			unsigned_int_putnbr.c\

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJECTS)

$(LIBFT):
	make -C $(LIBFT_DIR) 
	make bonus -C $(LIBFT_DIR)

clean:
	rm -f ${OBJECTS}
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)
	make fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY:	all, clean, fclean, re