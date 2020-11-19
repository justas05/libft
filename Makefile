SRCS=ft_bzero.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memrchr.c \
ft_memset.c \
ft_strlen.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_strchr.c \
ft_strrchr.c \
ft_strnstr.c \
ft_strncmp.c \
ft_atoi.c \
ft_strtoll.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_split.c \
ft_itoa.c \
ft_strmapi.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_isblank.c \
ft_iscntrl.c \
ft_isgraph.c \
ft_islower.c \
ft_ispunct.c \
ft_isspace.c \
ft_isupper.c \
ft_isxdigit.c \
ft_abs.c \
ft_strcat.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strncat.c \
ft_strncpy.c \
ft_strndup.c \
ft_strnlen.c \
ft_strstr.c \
ft_swap.c
SRCS_BONUS=ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c
OBJS=$(SRCS:.c=.o)
OBJS_BONUS=$(SRCS_BONUS:.c=.o)
CFLAGS=-Wall -Wextra -Werror
CC=cc
AR=ar
RM=rm
NAME=libft.a

.PHONY: clean fclean all re bonus all

all: $(NAME) $(OBJS_BONUS)

bonus: $(NAME) $(OBJS_BONUS)
	$(AR) -rc $(NAME) $(OBJS_BONUS)

$(NAME): $(OBJS)
	$(AR) -rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $(@:.o=.c)

$(OBJS_BONUS): $(SRCS_BONUS)
	$(CC) $(CFLAGS) -c -o $@ $(@:.o=.c)

clean:
	$(RM) -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

so: $(OBJS) $(OBJS_BONUS)
	clang -shared -o libft.so $(OBJS) $(OBJS_BONUS)

cleanso: fclean
	rm -f libft.so