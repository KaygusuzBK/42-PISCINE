/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:53:42 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/07/28 14:38:40 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0') || (str[c] > '9'))
			return (0);
		c++;
	}
	return (1);
}
/*
 int    main()
 {
     printf("%d", ft_str_is_numeric("01948987493"));
     printf("\n%d", ft_str_is_numeric("0484882j8995489"));
     printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
 }
 */
