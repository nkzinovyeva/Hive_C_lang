/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nzinovye <nzinovye@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:58:45 by nzinovye          #+#    #+#             */
/*   Updated: 2019/07/21 11:02:09 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2);

int	main()
{
	char *s1;
	char *s2;
	s1 = "main";
	s2 = "*t";
	printf("%d\n", match(s1, s2));
	return (0);
}