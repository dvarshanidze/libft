#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>

#define BUFF_SIZE 100
#define MALLCHECK(x) if (!x) return (-1);
#define IS_SPACE(x) (x == ' ' || x == '\t' || x == '\r' || x == '\f')

void *ft_memset(void *s, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);

#endif