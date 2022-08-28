/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:46:52 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/08/02 20:54:12 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}
/*
 int        main(void)
 {
     printf("-1 = %d (0)\n", ft_is_prime(-1));
     printf(" 0 = %d (0)\n", ft_is_prime(0));
     printf(" 1 = %d (0)\n", ft_is_prime(1));
     printf(" 2 = %d (1)\n", ft_is_prime(2));
     printf(" 3 = %d (1)\n", ft_is_prime(3));
     printf(" 4 = %d (0)\n", ft_is_prime(4));
     printf(" 5 = %d (1)\n", ft_is_prime(5));
     printf(" 10 = %d (0)\n", ft_is_prime(10));
     printf(" 11 = %d (1)\n", ft_is_prime(11));
 }
 */
