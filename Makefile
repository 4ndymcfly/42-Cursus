NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a

# Regla para compilar la librería libft
$(LIBFT):
    @$(MAKE) -C $(LIBFT_DIR)

# Regla para compilar los archivos objeto
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

# Regla para compilar el proyecto
$(NAME): $(OBJS)
    ar rcs $(NAME) $(OBJS)

# Regla para compilar todos los archivos
all: $(LIBFT) $(NAME)

# Regla para limpiar archivos objeto
clean:
    rm -f $(OBJS)
    @$(MAKE) -C $(LIBFT_DIR) clean

# Regla para limpiar archivos objeto y ejecutables
fclean: clean
    rm -f $(NAME)
    @$(MAKE) -C $(LIBFT_DIR) fclean

# Regla para recompilar todo
re: fclean all

# Regla para compilar los bonus
BONUS_SRCS = $(wildcard *_bonus.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
BONUS_NAME = $(NAME)_bonus

bonus: $(BONUS_OBJS)
    ar rcs $(BONUS_NAME) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus
