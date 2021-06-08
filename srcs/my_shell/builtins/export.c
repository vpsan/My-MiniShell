/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 20:04:06 by bhatches          #+#    #+#             */
/*   Updated: 2021/06/07 20:04:09 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_shell.h"
#include <printf.h>

int 	print_export_declare_x(t_list *env_head)
{
	t_list	*tmp;

	env_head = ft_lst_Sort(env_head);
	tmp = env_head;
	while(tmp != NULL)
	{
		printf("declare -x ");
		printf("%s=", tmp->env_arr[0]);
		if (tmp->env_arr[1] == NULL)
			printf("\n");
		else
			printf("%s\n", tmp->env_arr[1]);
		tmp = tmp->next;
	}
	return (1);
}

int 	export(char **cmnd_words, t_list *env_head)
{
	char 	**arr;
	int		i;


	if (cmnd_words[1] == NULL)
	{
		print_export_declare_x(env_head);
		return (0);
	}
	else
	{
		i = 1;
		while (cmnd_words[i] != NULL)
		{
			arr = ft_split(cmnd_words[i], '=');
			if (arr[1] == NULL)
				ft_lstadd_back(&env_head, ft_lstnew(arr, 0));
			else
				ft_lstadd_back(&env_head, ft_lstnew(arr, 1));
			i++;
		}
	}
	return (0);
}