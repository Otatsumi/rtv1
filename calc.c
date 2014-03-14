/*
** calc.c for  in /home/bauwen_j/rendu/my_git/rtv1
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Fri Mar 14 20:08:36 2014 bauwen_j
** Last update Fri Mar 14 20:08:36 2014 bauwen_j
*/

#include <math.h>

float	*discriminant_sol(float alpha, float beta, float teta)
{
  float	*sol;
  float	delta;

  
  sol = malloc(3 * sizeof(float));
  delta = pow(beta, 2) - (4 * alpha * c);
  if (delta == 0)
    {
      sol[0] = 0;
      sol[1] = - beta / (2 * alpha);
      return (sol);
    }
  if (delta < 0)
    {
      sol[0] = -1;
      return (sol);
    }
  if (delta < 0)
    {
      sol[0] = 2;
      sol[1] = - beta - sqrt(delta) / (2 * alpha);
      sol[2] = - beta + sqrt(delta) / (2 * alpha);
      return (sol)
    }
}

int	equation_quadrilic(int *coef, int x, int y)
{
  float	alpha;
  float	beta;
  float	teta;
  float	*sol;

  alpha = ;
  beta = ;
  teta = ;
  sol = discriminant_sol(alpha, beta, teta);
  if (sol[0] == -1)
    return (-1);
  else
    return (0);
}

