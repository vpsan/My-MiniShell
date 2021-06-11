/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:40:13 by bhatches          #+#    #+#             */
/*   Updated: 2021/06/10 14:40:39 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_shell.h"

int	builtin_env(t_env_list *env_head, int out_fd)
{
	t_env_list	*tmp;

	tmp = env_head;
	while (tmp != NULL)
	{
		if (tmp->declare_flag != 0)
		{
			ft_putstr_fd(tmp->env_arr[0], out_fd);
			ft_putstr_fd("=", out_fd);
			ft_putstr_fd(tmp->env_arr[1], out_fd);
			ft_putstr_fd("\n", out_fd);
		}
		tmp = tmp->next;
	}
	return (0);
}
