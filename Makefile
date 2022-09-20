NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
LIBPATH = ./libs/
SRCPATH = ./srcs/
RM = rm -rf

SRCS = $(addprefix $(SRCPATH), 	\
			ft_printf.c ft_itoa.c ft_putchar.c ft_putstr.c \
			ft_utoa.c ft_printhex.c ft_pflag.c)

OBJS = $(SRCS:.c=.o)

.o: .c
	cc $(CFLAGS) -I $(LIBPATH) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

git:
	git add libs/ $(SRCS) Makefile libftprintf.a
	sleep 5
	git commit -m "Automated commit from Makefile"
	git push

