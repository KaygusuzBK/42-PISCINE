/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:53:42 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/07/26 23:08:19 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		++i;
	}
	return (1);
}
/*
 int    main()
 {
     printf("%d", ft_str_is_alpha("abcdefghijkl"));
     printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
     printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
 }

*/
