/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:40:18 by bhatches          #+#    #+#             */
/*   Updated: 2021/06/07 15:40:19 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_shell.h"

int	pwd(void)
{
	char	*pwd_str;

	pwd_str = getcwd(NULL, 0);
	if (pwd_str == NULL)
	{
		ft_putendl_fd(strerror(errno), 2);
		return (ERROR);
	}
	ft_putendl_fd(pwd_str, 1);
	free(pwd_str);
	return (0);
}
