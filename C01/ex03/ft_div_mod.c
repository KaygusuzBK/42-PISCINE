/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:39:42 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/07/25 10:40:11 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
 int    main()
 {
     int a;
     int b;
     int *div ;
     int *mod;

     a = 10;
     b = 5;
     div = &a;
     mod = &b;
     ft_div_mod(a, b, div, mod);
     printf("%d\n", *div);
     printf("%d", *mod);
 }
 */
