/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlucio <dlucio@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 05:07:41 by dlucio            #+#    #+#             */
/*   Updated: 2020/05/21 05:07:48 by dlucio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		m;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	m = n;
	if (n < 0)
		m = -n;
	while (m /= 10)
		i++;
	if (n < 0)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * i + 2)))
		return (NULL);
	str[i + 1] = '\0';
	m = n;
	if (n < 0)
		m = -n;
	while (i > -1)
	{
		str[i] = m % 10 + 48;
		m = m / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
