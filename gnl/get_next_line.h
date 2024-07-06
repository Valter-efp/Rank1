/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vafernan <vafernan@42student.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:34:24 by vafernan          #+#    #+#             */
/*   Updated: 2024/05/10 10:01:00 by vafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

char	*ft_strchr(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strndup(char *s, int len);
char	*dealloc(char *stash, char *buffer);
char	*read_file(int fd, char *stash);
char	*extract_remaining_line(char *stash);
char	*get_next_line(int fd);
int		ft_strclen(char *str, char c);

#endif