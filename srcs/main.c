/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:29:03 by bhatches          #+#    #+#             */
/*   Updated: 2021/06/09 19:05:13 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include "my_structures.h"
#include "prsng_vldtn.h"
#include "my_shell.h"
#include "my_errors.h"
#include <stdbool.h>
#include <stdio.h>

int	main(int argc, char **argv, char **env)
{
	t_main	prmtrs;

	if (argc > 1)
		return (1);
	(void)argv;
	create_env_lst(&prmtrs, env);

	test_env_add(prmtrs);
	test_builtin_env(prmtrs);
	test_builtin_unset(prmtrs);
	test_builtin_export_without_arguments(prmtrs);
	test_builtin_export_with_arguments(prmtrs);
	test_updatevalue_env_lst(prmtrs);
	test_builtin_cd(prmtrs);
	test_builtin_echo(prmtrs);
	test_printf_all_env_lst(prmtrs.env_head);

	env_lstclear(&prmtrs.env_head, ft_free_str_arr);
	printf("Everything normal\n");
//	 sleep(30);
	return (0);
}
