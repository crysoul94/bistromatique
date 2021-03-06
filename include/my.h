/*
** my.h for Piscine_C_J10 in /home/denuit_m/rendu/Piscine_C_J10
** 
** Made by denuit mathieu
** Login   <denuit_m@epitech.net>
** 
** Started on  Sun Oct 11 12:32:51 2015 denuit mathieu
** Last update Fri Oct 30 00:36:50 2015 denuit mathieu
*/

#ifndef LIBMY_H_
#define LIBMY_H_

void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_strlen(const char *str);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
int	my_getnbr_base(char *nbr, char *base);
int	my_show_wordtab(char **tab);
char	**my_str_to_wordtab(char *str);
int	my_nboverflow(char *str, int len, int sign);
char	*my_strdup(char *str);
int	my_atoi_base(char *str, char *base);

#endif
