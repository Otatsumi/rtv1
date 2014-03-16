/*
** calc.c for  in /home/bauwen_j/rendu/my_git/rtv1
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Fri Mar 14 20:08:36 2014 bauwen_j
** Last update Fri Mar 14 20:08:36 2014 bauwen_j
*/

#include <stdlib.h>
#include <math.h>
#include "my.h"

double		*discriminant_sol(double alpha, double beta, double teta)
{
  double	*sol;
  double	delta;

  sol = malloc(3 * sizeof(double));
  delta = pow(beta, 2) - (4.0 * alpha * teta);
  if (delta >= -0.0001 && delta <= 0.0001)
    {
      sol[0] = 0;
      sol[1] = - beta / (2 * alpha);
      return (sol);
    }
  if (delta > 0.0001)
    {
      sol[0] = 2;
      sol[1] = - beta - sqrt(delta) / (2 * alpha);
      sol[2] = - beta + sqrt(delta) / (2 * alpha);
      return (sol);
    }
  sol[0] = -1;
  return (sol);
}

int		equation_quadrilic(int *c, int *v, int x, int y)
{
  double	alpha;
  double	beta;
  double	teta;
  double	*sol;

  alpha = c[0] * pow(v[0], 2) + c[1] * pow(v[1], 2) + c[2] * pow(v[2], 2);
  beta = 2 * (c[0] * v[0] * x + c[1] * v[1] * y + c[2] * v[2] * Z_EYES)
    + (c[8] * v[0] + c[9] * v[1] + c[10] * v[2]);
  teta = c[0] * pow(x, 2) + c[1] * pow(y, 2) + c[2] * pow(0, 2) + c[11];
  sol = discriminant_sol(alpha, beta, teta);
  if (sol[0] == -1)
    return (-1);
  else
    return (0);
}
