/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlucio <dlucio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 04:01:52 by dlucio            #+#    #+#             */
/*   Updated: 2020/05/20 04:01:56 by dlucio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*news;
	size_t	len_s;
	size_t	i;

	if (s == 0)
		return (NULL);
	len_s = ft_strlen(s);
	i = 0;
	if (start > len_s)
		return (ft_strdup(""));
	while (s[i + start] != '\0' && i < len)
		i++;
	if (!(news = ft_calloc(sizeof(char), i + 1)))
		return (NULL);
	i = 0;
	while (s[i + start] != '\0' && i < len)
	{
		news[i] = s[i + start];
		i++;
	}
	return (news);
}
