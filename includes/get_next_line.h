/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhatches <bhatches@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 12:12:06 by bhatches          #+#    #+#             */
/*   Updated: 2021/06/08 15:22:23 by bhatches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif
# define ERROR -1

int			get_next_line(int fd, char **line);
int			gnl_check_or_creat_buf(int fd, char **buf);
int			gnl_read_line(int fd, char **buf, char **line);
char		*ft_leftjoin_sep(char *s1, char *s2, int value);
char		*ft_rewrite_str(char *s, int value);

#endif
