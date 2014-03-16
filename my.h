/*
** my.h for  in /home/bauwen_j/rendu/my_git/rtv1
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Thu Mar 13 15:47:14 2014 bauwen_j
** Last update Thu Mar 13 15:47:14 2014 bauwen_j
*/

#ifndef MY_H_
# define MY_H_

# define SIZE_X	1000
# define SIZE_Y	1000

# define X_LIGHT  1200
# define Y_LIGHT  1200
# define Z_LIGHT  100

# define X_EYES  0
# define Y_EYES	 0
# define Z_EYES  -300

# define X_CIRCLE  0
# define Y_CIRCLE  0
# define Z_CIRCLE  200
# define R_CIRCLE  200

typedef struct	s_val
{
  int	line;
  int	bpp;
  int	value;
  int	endian;
}		t_val;

typedef struct	s_wmlx
{
  void	*mlx;
  void	*win;
  void	*img;
  char	*data;
  t_val	val;
}		t_wmlx;

int     init_circle(int *coef, int x, int y);
int     equation_quadrilic(int *c, int *v, int i, int y);
int     *create_coef();

#endif /* !MY_H_ */
