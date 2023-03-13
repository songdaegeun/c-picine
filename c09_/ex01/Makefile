CC=	cc
CFLAGS=	-Wall -Wextra -Werror

SRCPATH= srcs
INCPATH= includes

NAME= libft.a

SRCS= $(addprefix $(SRCPATH)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS= $(addprefix $(SRCPATH)/, ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o)
HEADERS= $(INCPATH)/ft.h

.PHONY: clean, fclean, re, all

all: $(NAME)

$(NAME): $(OBJS)
	ar rsc $@ $^

$(OBJS): %.o: %.c $(HEADERS)
	$(CC) -c $(CFLAGS) -o $@ $< -I$(INCPATH)

clean:
	rm -f $(OBJS)

fclean: 
	make clean;\
	rm -f libft.a

re:
	make fclean;\
	make all
