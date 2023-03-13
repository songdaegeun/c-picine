CC=	cc
CFLAGS=	-Wall -Wextra -Werror #-g -fsanitize=address

SRCPATH= srcs
INCPATH= includes

NAME= bsq

SRCS= $(addprefix $(SRCPATH)/, main.c process.c string_cal.c search_bsq.c map_file.c map_std.c)
OBJS= $(addprefix $(SRCPATH)/, main.o process.o string_cal.o search_bsq.o map_file.o map_std.o)
HEADERS= $(addprefix $(INCPATH)/, map_file.h process.h string_cal.h search_bsq.h map_file.h map_std.h)

.PHONY: clean, fclean, re, all

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

$(OBJS): %.o: %.c $(SRCS)
	$(CC) -c $(CFLAGS) -o $@ $< -I$(INCPATH)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
