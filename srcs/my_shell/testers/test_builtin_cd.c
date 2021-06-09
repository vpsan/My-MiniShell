/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_builtin_cd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 15:21:54 by bhatches          #+#    #+#             */
/*   Updated: 2021/06/09 15:22:06 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_shell.h"

void 	test_builtin_cd(t_main prmtrs)
{
	char **cmnd_words;
	cmnd_words = (char **)malloc(sizeof(char *) * 5);

	// example 1 - cd with argimnets
	cmnd_words[0] = ft_strdup("cd\0");
	cmnd_words[1] = ft_strdup("..\0");
	cmnd_words[2] = NULL;
	cmnd_words[3] = NULL;
	cmnd_words[4] = NULL;

//	// example 2 - cd without argimnets
//	cmnd_words[0] = ft_strdup("cd\0");
//	cmnd_words[1] = NULL;
//	cmnd_words[2] = NULL;
//	cmnd_words[3] = NULL;
//	cmnd_words[4] = NULL;

//	print_export_declare_x(prmtrs.env_head);
	builtin_cd(cmnd_words, prmtrs.env_head);
	printf("______________________________\n");
	printf("______________________________\n");
	printf("______________________________\n");
	print_export_declare_x(prmtrs.env_head);
	builtin_pwd();
	return ;
}