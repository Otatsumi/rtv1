/*
** form.c for  in /home/bauwen_j/rendu/my_git/rtv1
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Fri Mar 14 14:08:16 2014 bauwen_j
** Last update Fri Mar 14 14:08:16 2014 bauwen_j
*/

#include <stdlib>
#include "my.h"

int	check_circle(int *coef, int x, int y)
{
  coef[0] = ;
  coef[1] = ;
  coef[2] = ;
  coef[3] = ;
  coef[4] = ;
  coef[5] = ;
  coef[5] = ;
  coef[7] = ;
  coef[8] = ;
  coef[9] = ;
  coef[10] = ;
  coef[11] = ;
  if (equation_quadrilic(coef, x, y) == -1)
    return (1);
  return(0);
}

int	check_cylindre(int *coef, int x, int y)
{
  coef[0] = ;
  coef[1] = ;
  coef[2] = ;
  coef[3] = ;
  coef[4] = ;
  coef[5] = ;
  coef[5] = ;
  coef[7] = ;
  coef[8] = ;
  coef[9] = ;
  coef[10] = ;
  coef[11] = ;
  if (equation_quadrilic(coef, x, y) == -1)
    return (1);
  return(0);
}

int	check_elipse(int *coef, int x, int y)
{
  coef[0] = ;
  coef[1] = ;
  coef[2] = ;
  coef[3] = ;
  coef[4] = ;
  coef[5] = ;
  coef[5] = ;
  coef[7] = ;
  coef[8] = ;
  coef[9] = ;
  coef[10] = ;
  coef[11] = ;
  if (equation_quadrilic(coef, x, y) == -1)
    return (1);
  return(0);
}

int	check_cone(int *coef, int x, int y)
{
  coef[0] = ;
  coef[1] = ;
  coef[2] = ;
  coef[3] = ;
  coef[4] = ;
  coef[5] = ;
  coef[5] = ;
  coef[7] = ;
  coef[8] = ;
  coef[9] = ;
  coef[10] = ;
  coef[11] = ;
  if (equation_quadrilic(coef, x, y) == -1)
    return (1);
  return(0);
}

int	*create_coef()
{
  int	*coef;
  int	i;

  if ((coef = malloc(12 * sizeof(int))) == NULL)
    return(-1);
  i = -1;
  while (++i < 12)
    coef[i] = 0;
  return (coef);
}
