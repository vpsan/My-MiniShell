/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getvalue_env_lst.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:58:17 by bhatches          #+#    #+#             */
/*   Updated: 2021/06/09 12:03:42 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_shell.h"

char        *getvalue_env_lst(char *name, t_env_list *env_head)
{
    t_env_list *tmp;

    tmp = env_head;
    while (tmp != NULL)
    {
        if (ft_strcmp(name, tmp->env_arr[0]) == 0)
        {
            if (tmp->env_arr[1] != NULL)
                return(tmp->env_arr[1]);
        }
        tmp = tmp->next;
    }
    return (NULL);
}