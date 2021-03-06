/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 10:14:15 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/11 15:26:11 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char a[3];

	a[1] = '0';
	while (a[1] <= '9')
	{
		a[2] = a[1] + 1;
		while (a[2] <= '9')
		{
			a[3] = a[2] + 1;
			while (a[3] <= '9')
			{
				ft_putchar(a[1]);
				ft_putchar(a[2]);
				ft_putchar(a[3]);
				if (a[1] != '7' || a[2] != '8' || a[3] != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				a[3]++;
			}
			a[2]++;
		}
		a[1]++;
	}
}
