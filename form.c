/*
** form.c for  in /home/bauwen_j/rendu/my_git/rtv1
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Fri Mar 14 14:08:16 2014 bauwen_j
** Last update Fri Mar 14 14:08:16 2014 bauwen_j
*/

#include <stdlib.h>
#include <math.h>
#include "my.h"

int	*creat_vector(int x, int y)
{
  int	*vector;
  int	vx;
  int	vy;
  int	vz;

  vx = x - X_EYES;
  vy = y - Y_EYES;
  vz = 0 - Z_EYES;
  if ((vector = malloc(3 * sizeof(int))) == NULL)
    return (NULL);
  vector[0] = vx;
  vector[1] = vy;
  vector[2] = vz;
  return (vector);
}

int	*create_coef()
{
  int	*coef;
  int	i;

  if ((coef = malloc(12 * sizeof(int))) == NULL)
    return (NULL);
  i = -1;
  while (++i < 12)
    coef[i] = 0;
  return (coef);
}

int	init_circle(int *coef, int x, int y)
{
  int	*vector;

  coef[0] = 1;
  coef[1] = 1;
  coef[2] = 1;
  coef[8] = -2 * X_CIRCLE;
  coef[9] = -2 * Y_CIRCLE;
  coef[10] = -2 * Z_CIRCLE;
  coef[11] = -(pow(R_CIRCLE, 2) + pow(X_CIRCLE, 2)
	       + pow(Y_CIRCLE, 2) + pow(Z_CIRCLE, 2));
  if ((vector = creat_vector(x, y)) == NULL)
    return (1);
  if (equation_quadrilic(coef, vector, x, y) == -1)
    return (1);
  return (0);
}
