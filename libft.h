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
void	*ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void* dest, const void *src, size_t size);
void	*ft_memchr(const void *memoryBlock, int chr, size_t size);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t size);

size_t	ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, char *src, size_t size);
size_t ft_strlcat(char *dest, char *src, size_t size);

// Utilisation de malloc
void    *calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);

// Additional functions
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *str, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

typedef struct  s_list
{
    void    *content;
    struct s_list   *next;
}   t_list;

#endif
