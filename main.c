/*
** main.c for  in /home/bauwen_j/rendu/my_git/rtv1
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Mon Mar 10 12:24:53 2014 bauwen_j
** Last update Mon Mar 10 12:24:53 2014 bauwen_j
*/

#include <stdlib.h>
#include <mlx.h>
#include "my.h"

int	gere_key(int keycode)
{
  if (keycode == 65307)
    exit(EXIT_SUCCESS);
  return (keycode);
}

char	*in_data(t_wmlx mlx)
{
  int	i;

  if ((mlx.data = mlx_get_data_addr(mlx.img, &mlx.val.bpp, &mlx.val.line, &mlx.val.endian)) == NULL)
    return (NULL);
  i = 0;
  while (i < SIZE_X * SIZE_Y * (mlx.val.bpp / 8))
    {
      mlx.data[i + 1] = 127;
      i = i + mlx.val.bpp / 8;
    }
  return (mlx.data);
}

int		gere_expose(void *param)
{
  t_wmlx	*mlx;

  mlx = param;
  mlx_put_image_to_window(mlx->mlx, mlx->win, mlx->img, 0, 0);
  return (0);
}

int		main()
{
  t_wmlx	mlx;

  if ((mlx.mlx = mlx_init()) == 0)
    return (-1);
  if ((mlx.win = mlx_new_window(mlx.mlx, SIZE_X, SIZE_Y, "Hello world!")) == 0)
    return (-1);
  mlx.img = mlx_new_image(mlx.mlx, SIZE_X, SIZE_Y);
  if ((mlx.data = in_data(mlx)) == NULL)
    return (-1);
  mlx_put_image_to_window(mlx.mlx, mlx.win, mlx.img, 0, 0);
  mlx_key_hook(mlx.win, &gere_key, &mlx);
  mlx_expose_hook(mlx.win, &gere_expose, &mlx);
  mlx_loop(mlx.mlx);
  return (0);
}
