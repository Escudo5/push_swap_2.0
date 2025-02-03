Name = push_swap
BONUS_NAME = checker

CC = cc

HEADERS = -I ./includes

CFLAGS = -Wall -Wextra -Werror -g3 -fPIC $(HEADERS)

SRCS := $(addprefix sources/, \
	principal/main.c principal/utils.c principal/init.c\
	parsing/parse.c parsing/utils.c parsing/overflow.c parsing/check_dup.c\
	moves/pa.c moves/pb.c moves/ra.c moves/rb.c moves/rr.c moves/rra.c moves/rrb.c moves/rrr.c moves/sa.c moves/sb.c moves/ss.c\
	algorithms/sort_three.c algorithms/sort_four.c algorithms/sort_five.c algorithms/k_sort.c)

SRCS_LIB := $(addprefix ./custom-libft/, \
	ft_printf.c ft_putchar.c ft_isdigit.c ft_putchar_fd.c ft_substr.c ft_hexadec.c ft_putnbr.c\
	ft_putptr.c ft_putstr.c ft_putnbru.c ft_putstr_fd.c ft_split.c ft_strlen.c ft_strncmp.c ft_calloc.c\
	ft_atoi.c ft_atol.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_strjoin.c\
	ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_sqrt.c get_next_line_bonus.c ft_strchr.c)

BONUS_DIR = sources/bonus

BONUS_SRC = $(addprefix $(BONUS_DIR)/, main_bonus.c moves_check.c)
BONUS_SRCS = $(filter-out sources/principal/main.c, $(SRCS)) $(BONUS_SRC)

OBJS = $(SRCS:.c=.o) $(SRCS_LIB:.c=.o)

BONUS_OBJS = $(BONUS_SRCS:.c=.o) $(SRCS_LIB:.c=.o)

$(Name): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(Name)

bonus: $(BONUS_NAME)
	
	$(BONUS_NAME): $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(BONUS_NAME) -o $(BONUS_OBJS)

all: $(Name)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(Name) $(BONUS_NAME)

re: fclean all

$(BONUS_DIR):
	mkdir -p $(BONUS_DIR)

$(BONUS_DIR)/%.o: $(BONUS_DIR)/%.c | $(BONUS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re bonus
