#ifndef __DEPEND_H__
# define __DEPEND_H__

struct	s_opp
{
		char *opp;
		int (*ft)(int, int);
};

typedef	struct s_opp	t_opp;

int	ft_add(int n1, int n2);
int	ft_sub(int n1, int n2);
int	ft_mul(int n1, int n2);
int	ft_div(int n1, int n2);
int	ft_mod(int n1, int n2);
int ft_usage(int n1, int n2);

#endif /* __DEPEND_H__ */
