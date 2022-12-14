/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:29:15 by tvillare          #+#    #+#             */
/*   Updated: 2022/11/30 11:56:29 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

#include <stdio.h>

int	check_arg(int argc, char **argv)
{
	char	ber[5];
	int		len;
	int		i;

	i = 0;
	if (argc != 2)
		return (0);
	len = ft_strlen(argv[1]);
	if (4 >= len)
		return (0);
	else
		len -= 4;
	while (4 > i)
		ber[i++] = argv[1][len++];
	if (ft_strncmp(ber, ".ber", 4) != 0)
		return (0);
	return (1);
}
