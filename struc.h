/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struc.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:22:46 by tvillare          #+#    #+#             */
/*   Updated: 2022/11/09 11:22:57 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


typedef struct s_map
{
	void			*map;
	int				colum;
	struct s_map	*next;
}	t_map;
