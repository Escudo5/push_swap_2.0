Name = push_swap

CC = gcc

HEADERS = -I ./includes

CFLAGS = -Wall -Wextra -Werror -g3 $(HEADERS)

SRCS := $(addprefix sources/, \
	principal/main.c principal/utils.c	principal/init.c\
	parsing/parse.c	parsing/utils.c	parsing/overflow.c	parsing/check_dup.c\
	moves/pa.c	moves/pb.c	moves/ra.c	moves/rb.c  moves/rr.c moves/rra.c moves/rrb.c moves/rrr.c moves/sa.c moves/sb.c moves/ss.c\
	algorithms/sort_three.c	algorithms/sort_four.c	algorithms/sort_five.c	algorithms/k_sort.c)

SRCS_LIB := $(addprefix ./libft/, \
	ft_printf.c	ft_putchar.c	ft_isdigit.c	ft_hexadec.c	ft_putnbr.c\
	ft_putptr.c	ft_putstr.c	ft_putnbru.c	ft_split.c	ft_strlen.c\
	ft_atoi.c	ft_atol.c	ft_lstadd_back_bonus.c	ft_lstadd_front_bonus.c	ft_lstclear_bonus.c\
	ft_lstlast_bonus.c	ft_lstnew_bonus.c	ft_lstsize_bonus.c	ft_sqrt.c)

OBJS = $(SRCS:.c=.o) $(SRCS_LIB:.c=.o)

$(Name): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(Name)

all: $(Name)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re
