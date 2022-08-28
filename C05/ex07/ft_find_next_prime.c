/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:46:52 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/08/02 20:54:50 by bkaygusu         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
 int        main(void)
{
 printf("-10 = %d (2)\n", ft_find_next_prime(-10));
 printf(" 2 = %d (2)\n", ft_find_next_prime(2));
 printf(" 3 = %d (3)\n", ft_find_next_prime(3));
 printf(" 5 = %d (5)\n", ft_find_next_prime(4));
 printf(" 11 = %d (11)\n", ft_find_next_prime(11));
}
*/
