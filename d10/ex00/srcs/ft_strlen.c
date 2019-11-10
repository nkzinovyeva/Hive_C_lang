/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:14:57 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/16 18:25:56 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;
	int leng;

	i = 0;
	leng = 0;
	while (str[i] != '\0')
	{
		i++;
		leng++;
	}
	return (leng);
}
