#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *str);
int ft_strncmp(const char *s1,const char *s2, size_t len);

// A tester
char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strchr( const char *string, int searchedChar);
char    *ft_strrchr(const char *string, int searchedChar);
void    ft_bzero(void *s, size_t n);
void    *ft_memset(void *pointer, int value, size_t count);

size_t	ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, char *src, size_t size);
size_t ft_strlcat(char *dest, char *src, size_t size);

#endif
