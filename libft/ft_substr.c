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
	char		*news;
	size_t		i;

	i = 0;
	if (s == 0)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (!(news = ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		news[i] = s[i + start];
		i++;
	}
	news[i] = '\0';
	return (news);
}
