/*
** bistro.h for Bistromathique in /home/denuit_m/rendu/bistromatique
** 
** Made by denuit mathieu
** Login   <denuit_m@epitech.net>
** 
** Started on  Mon Oct 19 16:04:11 2015 denuit mathieu
** Last update Mon Oct 26 16:46:50 2015 denuit mathieu
*/

#include <stdlib.h>

#define OP_OPEN_PARENT 0
#define OP_CLOSE_PARENT 1
#define OP_PLUS 2
#define OP_SUB 3
#define OP_MULT 4
#define OP_DIV 5
#define OP_MOD 6

#define SYNTAXE_ERROR_MSG "syntax error"

#define READ_BUFFER_SIZE (1024)

char	*eval_expr(char *base, char *ops, unsigned long size);
