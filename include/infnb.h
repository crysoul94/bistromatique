/*
** infnb.h for Bistromathique in /home/denuit_m/rendu
** 
** Made by denuit mathieu
** Login   <denuit_m@epitech.net>
** 
** Started on  Mon Oct 26 14:32:22 2015 denuit mathieu
** Last update Sun Nov  1 23:43:04 2015 denuit mathieu
*/

#ifndef INFNB_H_
# define INFNB_H_

#include "eval.h"

typedef struct	s_infnb
{
  int is_neg;
  int len;
  int offset;
  char *data;
  int allocated;
}		t_infnb;

typedef int (*t_infop)(t_eval_data *d, t_infnb *n1, t_infnb *n2, t_infnb *n3);

int	char_index(char c, const char *str);
int	infnb_nbrlen(const char *str, const char *base);
int	infnb_op_result_size(int op, t_infnb *left, t_infnb *right);
int	infnb_new(t_infnb *nb, int size);
int	infnb_iszero(t_infnb *nb, const char *base);
int	infnb_swap_biggest(t_infnb **left, t_infnb **right, const char *base);
int	infnb_operation(int op, t_eval_data *data, t_infnb *l, t_infnb *r);
int	infnb_add(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_sub(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_mul(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_div(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_mod(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_add_p(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_sub_p(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_mul_p(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_div_p(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_mod_p(t_eval_data *d, t_infnb *res, t_infnb *l, t_infnb *r);
int	infnb_is_biggest(t_eval_data *d, t_infnb *s1, t_infnb *s2);
int	infnb_nbrcmp(t_infnb *a, t_infnb *b, const char *base);
void	infnb_free(t_infnb *nb);
void	infnb_move(t_infnb *dest, t_infnb *src);
void	infnb_negate(t_infnb *nb);
void	infnb_skip_zero(t_infnb *nb, const char *base);
void	infnb_print(t_eval_data *data, t_infnb *nb);
void	preset_tmp(t_eval_data *d, t_infnb *result, int size);
void	infnb_cpy(t_eval_data *d, t_infnb *newnb, t_infnb *src);
t_infnb	*infnb_max(t_infnb *a, t_infnb *b, const char *base);
void	infnb_init(t_infnb *nb);
int	infnb_reuse(int size, t_infnb *result, t_infnb *nb);
void	infnb_copy(t_infnb *a, t_infnb *b);

#endif /* !INFNB_H_ */
