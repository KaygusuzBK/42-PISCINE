/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:46:52 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/08/04 09:36:25 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}
/*
int        main(void)
{
    printf("-1 = %d (0)\n", ft_sqrt(-1));
    printf(" 0 = %d (0)\n", ft_sqrt(0));
    printf(" 1 = %d (1)\n", ft_sqrt(1));
    printf(" 2 = %d (0)\n", ft_sqrt(2));
    printf(" 4 = %d (2)\n", ft_sqrt(4));
    printf(" 9 = %d (3)\n", ft_sqrt(9));
    printf(" 16 = %d (4)\n", ft_sqrt(16));
}
*/
