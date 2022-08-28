/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:53:42 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/07/28 15:16:37 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a') || (str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}
/*
int    main(){
 printf("%d", ft_str_is_lowercase("abcdefghijkl"));
 printf("\n%d", ft_str_is_lowercase("abcAdefghijkl"));
 printf("\n%d", ft_str_is_lowercase("-_134556efSghij67"));
}
*/
