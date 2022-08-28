/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaygusu <bkaygusu@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:18:28 by bkaygusu          #+#    #+#             */
/*   Updated: 2022/07/26 23:04:29 by bkaygusu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
 int        main(void)
 {
     char source[] = "Source string.";
     char destin[] = "Destination string.";
     char *dest;

     printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

     dest = ft_strcpy(destin, source);

     printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
     return (0);
 }
 */
