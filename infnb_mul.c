/*
** infnb_mul.c for infnb_mul in /home/gauthe_n/rendu/bistromatique
** 
** Made by Nicolas Gautherin
** Login   <gauthe_n@epitech.net>
** 
** Started on  Wed Oct 21 15:43:19 2015 Nicolas Gautherin
** Last update Sat Oct 31 14:41:31 2015 Nicolas Gautherin
*/

#include "infnb.h"
#include "bistro.h"

void	newtmp(t_eval_data *d, t_infnb *tmp, t_infnb *left, int rank)
{
  int	index;

  index = tmp->len;
  while (rank != 0)
    {
      tmp->data[index] = d->base[0];
      index = index - 1;
      rank = rank - 1;
    }
  rank = left->len - 1;
  while (rank >= left->offset)
    {
      tmp->data[index] = left->data[rank];
      rank = rank - 1;
      index = index + 1;
    }
}

int		do_multinf(t_eval_data *d, t_infnb *result,
			     t_infnb *left, t_infnb *right)
{
  t_infnb	tmp;
  int		index;
  int		index2;

  if (infnb_new(&tmp, (left->len - left->offset) +
		(right->len - right->offset)) == 2)
    return (2);
  index = right->len;
  while (index > right->offset)
    {
      newtmp(d, &tmp, left, (right->len - index));
      index2 = char_index(right->data[index], d->base);
      while (index2 != 0)
	{
	  infnb_add_p(d, result, result, &tmp);
	  right->data[index] = right->data[index] - 1;
	  index2 = index2 - 1;
      	}
      index = index - 1;
    }
  infnb_free(&tmp);
  return (0);
}

void	infnb_cpy(t_eval_data *d, t_infnb *newnb, t_infnb *src)
{
  int	index;

  newnb->is_neg = src->is_neg;
  index = 0;
  while (src->len - index > src->offset)
    {
      newnb->data[newnb->len - 1 - index] = src->data[src->len - 1 - index];
      index = index + 1;
    }
  newnb->offset = newnb->len - index;
}

int	infnb_mul_p(t_eval_data *d, t_infnb *result, t_infnb *left, t_infnb *right)
{
  infnb_swap_biggest(left, right, d->base);
  if ((char_index(left->data[0], d->base) == 48) && (left->data[1] == 0))
    {
      infnb_cpy(d, result, left);      
      return (0);
    }
  if ((char_index(right->data[0], d->base) == 0) && (right->data[1] == 0))
    {
      infnb_cpy(d, result, right);      
      return (0);
    }
  do_multinf(d, result, left, right);
  return (0);
}
