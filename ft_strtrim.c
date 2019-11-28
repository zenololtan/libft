/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 16:09:10 by ztan           #+#    #+#                */
/*   Updated: 2019/11/27 20:51:46 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;
	char	*str;

	start = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	while (s1[start] != '\0')
	{
		if (ft_strchr(set, s1[start]) == NULL)
			break ;
		start++;
	}
	if (s1[start] == '\0')
		return (ft_strdup(""));
	while (end)
	{
		if (ft_strrchr(set, s1[end - 1]) == NULL)
			break ;
		end--;
	}
	end = end - start;
	str = ft_substr((char *)s1, start, end);
	return (str);
}
